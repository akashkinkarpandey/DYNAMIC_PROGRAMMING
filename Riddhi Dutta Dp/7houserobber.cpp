#include<bits/stdc++.h>
using namespace std;
//n houses to steal
//array of money in each house given
//cannot steal from adjacent houses
//maximize profit
int n;
//cshop is shop number
//brute force
int maxprofit(int money[],int cshop)
{
    if(cshop==n)
    return 0;
    if(cshop==n-1)
    return money[n-1];
    int steal=money[cshop]+maxprofit(money,cshop+2);
    int donotsteal=maxprofit(money,cshop+1);
    return max(steal,donotsteal);

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<maxprofit(a,0)<<endl;
}
