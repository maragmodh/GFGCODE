//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    long long mod = 1e9 + 7;
    public:
    int solvemem(int n,vector<long long>&dp){
        if(n<=1)
            return 1;
        long long ans =0;
        if(dp[n]!=-1)
            return dp[n];
        for(int i=1;i<=n;i++)
            ans += ((solvemem(i-1,dp)%mod) * (solvemem(n-i,dp)%mod)) % mod;
            ans %= mod;
        return dp[n] = ans;
    }
    //Function to return the total number of possible unique BST. 
    int numTrees(int N) 
    {
        // Your code here
        vector<long long>dp(N+1,-1);
        return solvemem(N,dp);
    }
};

//{ Driver Code Starts.
#define mod (int)(1e9+7)
int main(){
    
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        
        //taking total number of elements
        int n;
        cin>>n;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    }
}	
// } Driver Code Ends