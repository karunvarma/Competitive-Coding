#include <algorithm>
#include <stdio.h>
#include <map>
#include <math.h>
#include <iostream>
#include <vector>
using namespace std;
#define mod 1000000007
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
 
*/
 
 
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        int count=0;
        int temp;
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&temp);
            if(temp%2==0)
                count++;
        }
        if(count==n&&k==0)
            cout<<"NO\n";
        else
        {
        if(count>=k)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
        }
    }
 
return(0);    
}
