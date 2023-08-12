//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int fMemorisation(int n, int curr,int prev, int arr[],vector<vector<int>>&dp){
        if(curr==n)
            return 0;
        if(dp[curr][prev+1]!=-1)
            return dp[curr][prev+1];
        int take=0;
        if(prev==-1 || arr[curr]>arr[prev]){
            take=arr[curr]+fMemorisation(n,curr+1,curr,arr,dp);
        }
        int nottake=fMemorisation(n,curr+1,prev,arr,dp);
        return dp[curr][prev+1]= max(take,nottake);
    }
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
	    return fMemorisation(n,0,-1,arr,dp);
	}  
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends