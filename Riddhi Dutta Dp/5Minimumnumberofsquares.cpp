#include<bits/stdc++.h>
using namespace std;
//memoization
//13=1^2 +1^2+..13 times
//13=3^2+2^2.. 2 terms
int dp[10005];
int minWays(int n)
{
if(n==0)
return 0;
if(n==1)
return 1;
if(dp[n]!=-1)
return dp[n];
dp[n]=INT_MAX;
for(int i=1;i<=sqrt(n);i++)
{
dp[n]=min(dp[n],1+minWays(n-(i*i)));
}
return dp[n];
}
int minWays1(int n)
{
if(n==0)
return 0;
if(n==1)
return 1;
dp[0]=0;dp[1]=1;
if(dp[n]!=-1)
return dp[n];
int mini=INT_MAX;
//f(n) return numbers of ways
//f(12)=1+f(12-1^2)
//f(12)=1+f(12-2^2)
//f(12)=1+f(12-3^2)

//3 is sqrt of 12
for(int i=1;i<=sqrt(n);i++)
{
mini=min(mini,1+minWays1(n-(i*i)));
}
return dp[n]=mini;
}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<minWays(n)<<endl;
    memset(dp,-1,sizeof(dp));
    cout<<minWays1(n)<<endl;
    
}