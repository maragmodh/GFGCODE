//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	   // vector<int>dp(n+1);
	   // int a;
	   // if(n==1)
	   //     return arr[0];
	   // if(n==2)
	   //     return arr[1];
	   // for(int i=2;i<n;i++){
	   // int incl = arr[i] + findMaxSum(arr,n-2);
	   // int excl = findMaxSum(arr,n-1);
	   // a = max(incl,excl);
	   // }
	    
	   // return a;
	   vector<int>dp(n);
	   dp[0] = arr[0];
	   //int dp[1] = arr[1];
	   for(int i=1;i<n;i++){
	       int incl = dp[i-2] + arr[i];
	       int excl = dp[i-1];
	       dp[i] = max(incl,excl);
	   }
	   return dp[n-1];
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