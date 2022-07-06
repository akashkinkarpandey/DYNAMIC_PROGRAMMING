#include<bits/stdc++.h>
using namespace std;
//n houses to steal
//array of money in each house given
//cannot steal from adjacent houses
//maximize profit
int dp[100005];
int n;
//cshop is shop number
//tabular 
int maxprofit(int money[],int cshop)
{
    dp[n]=0;
    dp[n-1]=money[n-1];
    for(int i=n-2;i>=0;i--)
    {
        int steal=money[i]+dp[i+2];
        int donotsteal=dp[i+1];
        dp[i]=max(steal,donotsteal);
    }
    return dp[0];
}
int main()
{
    cin>>n;
    int a[n];
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<maxprofit(a,0)<<endl;
}
