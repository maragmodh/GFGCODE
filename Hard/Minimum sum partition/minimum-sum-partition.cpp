//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
    int ans=1e8;
    int solve(int arr[],int index, int n,vector<vector<int>>&dp,int sum,int curr){
        if(index==n){
            ans = min(ans,abs(curr-sum));
            return ans;
        }
        if(sum<0||curr<0)
            return 1e8;
        if(dp[index][sum]!=-1)
            return dp[index][sum];
        int incl = solve(arr,index+1,n,dp,sum-arr[index],curr+arr[index]);
        int excl = solve(arr,index+1,n,dp,sum,curr);
        return dp[index][sum] = min(incl,excl);
    }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
        for(int i=0;i<n;i++)
            sum+=arr[i];
        if(n==1)
            return sum;
	    vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
	    return solve(arr,0,n,dp,sum,0);
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
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends