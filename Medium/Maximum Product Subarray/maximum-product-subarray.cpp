//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long mini = arr[0];
	    long long maxi = arr[0];
	    long long res = arr[0];
	   // long long curr = arr[0];
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]==0){
	            mini = 1;
	            maxi = 1;
	           // res = max(res,maxi);
	            continue;
	        }
	        long long temp1 = arr[i]*mini;
	        long long temp2 = arr[i]*maxi;
	        maxi = max<long long>(temp1,temp2);
            mini = min<long long>(temp1,temp2);
            maxi = max<long long>(maxi,arr[i]);
	        mini = min<long long>(mini,arr[i]);
	        res = max<long long>(res,maxi);
	   }
	    return res;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends