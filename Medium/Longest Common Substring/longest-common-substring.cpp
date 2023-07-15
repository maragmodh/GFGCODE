//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int ans=0;
    int solve(string &s1, string &s2, int n, int m,int i,int j,vector<vector<int>>&dp){
        if(i>=n or j>=m){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int a=0;
        if(s1[i]==s2[j]){
            a=1+solve(s1,s2,n,m,i+1,j+1,dp);
        }
        solve(s1,s2,n,m,i+1,j,dp);
        solve(s1,s2,n,m,i,j+1,dp);
        ans=max(a,ans);
        return dp[i][j]=a;
    }
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        // your code here
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        solve(s1,s2,n,m,0,0,dp);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends