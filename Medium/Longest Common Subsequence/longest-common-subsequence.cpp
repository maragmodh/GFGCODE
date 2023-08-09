//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    int memoization(string &s1,int i,int j,string &s2,vector<vector<int>>&dp){
        if(i>=s1.size() || j>=s2.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans=0;
        if(s1[i]==s2[j])
            ans = 1+memoization(s1,i+1,j+1,s2,dp);
        else
            ans = max(memoization(s1,i,j+1,s2,dp),memoization(s1,i+1,j,s2,dp));
            
        return dp[i][j]=ans;
        
    }
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        vector<vector<int>>dp(s1.size(),vector<int>(s2.size(),-1));
        return memoization(s1,0,0,s2,dp);
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends