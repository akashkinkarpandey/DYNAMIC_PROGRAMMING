#include<bits/stdc++.h>
using namespace std;
// int dp[100005];
//tabular
int ways(string s)
{
// unordered_map<char,int>m;
// char c='A';
// for(int i=1;i<26;i++)
// m[c++]=i;

int len=s.length();
int d=1;
for(int i=0;i<len;i++)
if(s[i]=='0')
d++;
// // s=s+'.';
// if(len==1)
// return d;

for(int i=0;i<s.length()-1;i++)
{
    int t=stoi(s.substr(i,i+2));
    if(t>=1 and t<=26)
    d++;
}
return d;
}
int main()
{
    string s;
    cin>>s;
    // memset(dp,-1,sizeof(dp));
    cout<<ways(s)<<endl;
}