#include<bits/stdc++.h>
using namespace std;
int dp[100005];
//tabular
int ways(int n)
{
dp[0]=dp[1]=1;
for(int i=2;i<=n;i++)
dp[i]=dp[i-1]+dp[i-2];
return dp[n];
}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<ways(n)<<endl;
}