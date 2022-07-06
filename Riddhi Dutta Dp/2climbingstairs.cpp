#include<bits/stdc++.h>
using namespace std;
int dp[100005];
//memoization
int ways(int n)
{
    if(n==0 or n==1)
    return 1;
    if(dp[n]!=-1)
    return dp[n];
    return dp[n]=ways(n-1)+ways(n-2);
}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<ways(n)<<endl;
}