//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	   vector<int>dp(n);
	   dp[0] = arr[0];
	   // Iterate through the array starting from the second element (index 1)
    for (int i = 1; i < n; i++) {
        // Calculate the maximum sum including the current element (arr[i])
        //and the element two positions back (dp[i-2])
        int incl = dp[i - 2] + arr[i];

        // Calculate the maximum sum excluding the current element (arr[i])
        //and considering the sum up to the previous element (dp[i-1])
        int excl = dp[i - 1];

        // Store the maximum of the inclusive and exclusive sums in the DP vector
        dp[i] = max(incl, excl);
    }
     return dp[n - 1];
	}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends