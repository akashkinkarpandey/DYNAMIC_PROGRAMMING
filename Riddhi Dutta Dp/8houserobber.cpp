#include<bits/stdc++.h>
using namespace std;
//n houses to steal
//array of money in each house given
//cannot steal from adjacent houses
//maximize profit
int dp[100005];
int n;
//cshop is shop number
//memoiztion
int maxprofit(int money[],int cshop)
{
    dp[n]=0;
    dp[n-1]=money[n-1];
    if(dp[cshop]!=-1)
    return dp[cshop];
    int steal=money[cshop]+maxprofit(money,cshop+2);
    int donotsteal=maxprofit(money,cshop+1);
    return dp[cshop]=max(steal,donotsteal);
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
