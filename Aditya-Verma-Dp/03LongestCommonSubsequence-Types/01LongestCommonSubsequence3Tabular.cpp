#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//Leetcode Link accepted
// https://leetcode.com/problems/longest-common-subsequence/
// Enter string 1 and string 2
// abcd
// acbd
// Length of Longest Common Subsequence is
// 3
// explanantion-abd or acd are 2 subsequence strings

int LCS(string &X, string &Y, int n, int m,vector<vector<int>>&dp)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(X[i-1]==Y[j-1])
            {
            dp[i][j]=1+dp[i-1][j-1];
            }   
            else
            {
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }         
        }
    }
    return dp[n][m];
}
int main()
{
    string X;
    string Y;
    cout << "Enter string 1 and string 2\n";
    cin >> X >> Y;
    //Initialization
    int n=X.size();
    int m=Y.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    for(int i=0;i<=m;i++)
    dp[0][i]=0;
    for(int i=0;i<=n;i++)
    dp[i][0]=0;
    cout << "Length of Longest Common Subsequence is\n";
    cout << LCS(X, Y, n, m,dp) << endl;
    return 0;
}