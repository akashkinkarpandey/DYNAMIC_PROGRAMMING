#include<bits/stdc++.h>
using namespace std;
//13=1^2 +1^2+..13 times
//13=3^2+2^2.. 2 terms
//brute force
int minWays(int n)
{
if(n==0)
return 0;
if(n==1)
return 1;
int mini=INT_MAX;
//f(n) return numbers of ways
//f(12)=1+f(12-1^2)
//f(12)=1+f(12-2^2)
//f(12)=1+f(12-3^2)

//3 is sqrt of 12
for(int i=1;i<=sqrt(n);i++)
{
mini=min(mini,1+minWays(n-(i*i)));
}
return mini;
}
int main()
{
    int n;
    cin>>n;
    cout<<minWays(n)<<endl;
    
}