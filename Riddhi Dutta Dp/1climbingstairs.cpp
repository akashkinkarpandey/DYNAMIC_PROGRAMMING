#include<bits/stdc++.h>
using namespace std;
//n stairs to climb
//climb in 1 or 2 steps
//brute force
int ways(int n)
{
    if(n<=1)
    return 1;
    return ways(n-1)+ways(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<ways(n)<<endl;
}