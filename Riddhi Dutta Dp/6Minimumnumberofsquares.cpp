#include<bits/stdc++.h>
using namespace std;
//memoization
//13=1^2 +1^2+..13 times
//13=3^2+2^2.. 2 terms
int dp[10005];
int minWays(int n)
{
dp[0]=0;dp[1]=1;
for(int i=2;i<=n;i++)
{
    dp[i]=INT_MAX;
    for(int j=1;j<=sqrt(i);j++)
    {
        dp[i]=min(dp[i],1+dp[i-(j*j)]);
    }
}
return dp[n];
}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<minWays(n)<<endl;
}