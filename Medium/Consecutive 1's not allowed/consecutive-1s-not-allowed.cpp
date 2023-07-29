//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
// class Solution{
// public:
    const int mod=1e9+7;
class Solution{
public:
    ll help(int n,vector<int>&dp){
        if(n<=0) return 0;
        if(n==1 || n==2) 
            return n+1;
        if(n==3) 
            return 5;
        if(dp[n]!=-1) 
            return dp[n];
        int ans=(help(n-2,dp)+help(n-1,dp))%mod;
        return dp[n]=ans;
    }
    ll countStrings(int n) {
        vector<int> dp(n+10,-1);
        return help(n,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends