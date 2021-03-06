#include <algorithm>
#include <stdio.h>
#include <map>
#include <math.h>
#include <stack>
#include <string.h>
#include <queue>
#include <iostream>
#include <vector>
using namespace std;
#define mod 1000000007
#define MAX 10001
/*
 
int solve()
{
      ....
      Base Cases
      ....
      if ( DP[i][j] is calculated) // Already calculated so just reuse
               return DP[i][j];
      else // Calculate DP[i][j] and return it
           put recurrence algo
           DP[i][j] = ans of recurrence algo 
           return DP[i][j]
}
 
unsigned nChoosek( unsigned n, unsigned k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;
 
    int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}
 
 
 
int visited[200000]
vector <int> list[200000]
void bfs(int i)
{
	queue <int> q;
	q.push(i);
	visited[i]=1;
	while(!q.empty())
	{
		int k=q.front();
		q.pop();
		for(int j=0;j<list[k].size();j++)
		{
			if(visited[list[k][j]]==0)
			{
				q.push(list[k][j]);
				visited[list[k][j]]=1;
			}
		}
	}
}
 
struct node
{
    int v,dist;
    node(){}
    node(int _v,int _dist)
    {
        v=_v,dist=_dist;
    }
}aux;
 
#define MAX 10000
bool visited[MAX];
vector <int> L[MAX];
node search(int v)
{
    node ans=node(v,0);
    queue<node> q;
    q.push(node(v,0));
    
    memset(visited,false,sizeof(visited));
    visited[v]=true;
    
    while(!q.empty())
    {
        aux=q.front();
        q.pop();
        
        ans=aux;
        
        for(int i=L[aux.v].size()-1;i>=0;i--)
        {
            if(visited[L[aux.v][i]])   continue;
            visited[L[aux.v][i]]=true;
            q.push(node(L[aux.v][i],aux.dist+1));
        }
    }
    return ans;
    
}
*/
/*
void dfs(int i)
{
    stack<int> s;
    s.push(i);
    while(s.empty()==false)
    {
        int k=s.top();
        s.pop();
        if(visited[k]==false)
            visited[k]=true;
        else
        {
            continue;
        }
            for(int j=0;j<List[k].size();j++)
            {
                if(visited[List[k][j]==false)
                    visited[List[k][j]]=true;
                else
                    continue;
                s.push(List[k][j]);    
            }
    }
}
*/
long int a[100002];
long long int visited[100002];
vector <long long int> list[100002];
int bfs(long long int i)
{
	queue <long long int> q;
	q.push(i);
	visited[i]=1;
	long int c=1;
	while(!q.empty())
	{
		int k=q.front();
		q.pop();
		for(long long int j=0;j<list[k].size();j++)
		{
			if(visited[list[k][j]]==0)
			{
				q.push(list[k][j]);
				visited[list[k][j]]=1;
				c++;
			}
		}
	}
	return c;
}
 
 
 
int main()
{
    
    long int t;
    long int n,m;
    scanf("%d",&t);
    while(t--)
    {
        memset(visited,0,sizeof(visited));
        for(long int i=0;i<=100001;i++)
            list[i].clear();
        scanf("%d %d",&n,&m);
        
        
        long int x,y;
        while(m--)
        {
            scanf("%d %d",&x,&y);
            list[x].push_back(y);
            list[y].push_back(x);
        }
        long int count1=0;
        long long int count2=1;
        bool flag=true;
        for(long int i=1;i<=n;i++)
        {
            if(!visited[i])
            {
                long int x=bfs(i);
                if(x!=1)
                    count1+=x;
                else if(x==1&&flag)
                    {
                        count1+=2;
                        flag=false;
                    }    
            }
        }
        printf("%ld\n",count1);
        
        
    }
    
 
 
return(0);    
}
