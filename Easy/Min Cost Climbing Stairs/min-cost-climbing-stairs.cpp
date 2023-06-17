//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    
    // int solve(vector<int>&cost ,int n){
    //     if(n==0)
    //         return cost[0];
    //     if(n==1)
    //         return cost[1];
    //     int a  = cost[n] + min(solve(cost,n-1),solve(cost,n-2));
    //     return a;
    // }
    // int solve2(vector<int>&cost ,int n,vector<int>&dp){
    //     if(n==0)
    //         return cost[0];
    //     if(n==1)
    //         return cost[1];
    //     if(dp[n]!=-1)
    //         return dp[n];
    //     int a  = cost[n] + min(solve2(cost,n-1,dp),solve2(cost,n-2,dp));
    //     return a;
    // }
    int minCostClimbingStairs(vector<int>&cost ,int n) {
        //Write your code here
        //it is a recursion approach but we got TLE so we add memoiation
        // int ans = min(solve(cost,n-1) , solve(cost,n-2));
        // return ans;
        
        // vector<int>dp(n+1,-1);
        // int ans = min(solve2(cost,n-1,dp) , solve2(cost,n-2,dp));
        // return ans;
        vector<int>dp(n+1,-1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++)
            dp[i] = cost[i]+ min(dp[i-1],dp[i-2]);
        return min(dp[n-1],dp[n-2]);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>cost(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>cost[i];
        }

        Solution ob;
        cout<<ob.minCostClimbingStairs(cost,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends