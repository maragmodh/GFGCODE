//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int solvemem(int w, int wt[], int val[], int n,vector<vector<int>>&dp){
        // w = capacity;
        if(n==0){
            if(wt[0]<=w)
                return val[0];
            else
                return 0;
        }
        if(dp[n][w]!=-1)
            return dp[n][w];
        int incl=0;
        int excl = 0 + solvemem(w,wt,val,n-1,dp);
        if(wt[n]<=w){
            incl = val[n] + solvemem(w-wt[n],wt,val,n-1,dp);
        }
        dp[n][w] = max(incl,excl);
        return dp[n][w];
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>>dp(n,vector<int>(W+1,-1));
       return solvemem(W,wt,val,n-1,dp);
       
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends