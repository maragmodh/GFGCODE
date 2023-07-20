//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int const mod=1e9+7;
    int helper(int arr[], int n, int idx, long long sum, int target, vector<vector<int>>& memo) {
    if (idx == n) {
        if (sum == target)
            return 1;
        else
            return 0;
    }
    if (sum > target)
        return 0;
    if (memo[idx][sum] != -1)
        return memo[idx][sum];
    sum += arr[idx];
    int l = helper(arr, n, idx + 1, sum, target, memo) % mod;
    sum -= arr[idx];
    int r = helper(arr, n, idx + 1, sum, target, memo) % mod;
    return memo[idx][sum] = (l + r) % mod;
    }
    int perfectSum(int arr[], int n, int k)
    {
    vector<vector<int>>dp(n,vector<int>(k+1,-1));
    return helper(arr,n,0,0,k,dp);
    }
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends