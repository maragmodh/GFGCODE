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
	     long long int ans=INT_MIN;
        long long int pre=1;
        long long int suf=1;
        for(int i=0;i<n;i++)
        {
        if(suf==0) suf=1;
        if(pre==0) pre=1;
        pre=pre*arr[i];
        suf=suf*arr[n-i-1];
        ans=max(ans,max(pre,suf));
        }
    return ans;
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