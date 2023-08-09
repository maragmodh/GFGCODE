//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int solve(int n,vector<int> &dp)
    {
        if(n==0)
         return 1; // to step 0 you can go in only 1 way i.e.(2-2) therefor return 1
         
        if(n==1)
            return 1; //to step 1 you can go in only 1 way i.e.(2-1) therefor return 1
//IF WE ALREADY FIND THEN DONT DO FURTHER RECURSION CALL simply used previous value    
        if(dp[n]!=-1)     
            return dp[n];
        
        return dp[n]=(solve(n-1,dp)+solve(n-2,dp))%1000000007;
    }
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};




//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends