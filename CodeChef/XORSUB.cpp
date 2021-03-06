#include <algorithm>
#include <stdio.h>
#include <map>
#include <math.h>
#include <limits.h>
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
 
 
 
int main()
{
    int t;
    scanf("%d",&t);
    static int dp[1024][1024];
    while(t--)
    {
        memset(dp,0,sizeof(dp));
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n+1];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        dp[0][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<1024;j++)
            {
                dp[i][j]=dp[i-1][j] | dp[i-1][j^a[i-1]];
            }
        }
        int max1=0;
        for(int i=0;i<1024;i++)
        {
            max1=max(max1,dp[n][i]*(i^k));
        }
        printf("%d\n",max1);
 
    }
 
 
 
return(0);    
}
