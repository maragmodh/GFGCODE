//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll Aditya(int index,vector<int>&dp){
        if(index>=dp.size())
            return 1;
        if(dp[index]!=-1)
            return dp[index];
        int take=Aditya(index+2,dp);
        int nottake=Aditya(index+1,dp);
        return dp[index]=(take+nottake)%1000000007;
    }
    
    ll countStrings(int n) {
        // code here
        vector<int>dp(n,-1);
        return Aditya(0,dp);
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