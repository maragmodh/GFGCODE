//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
    // Find the lower bound of x in the array using std::lower_bound
    auto fst = lower_bound(arr, arr + n, x);
    
    // If the lower bound is equal to the end of the array, x is not present in
    // the array So, return 0 as there are no occurrences of x
    if (fst == arr + n)
        return 0;
    
    // Find the upper bound of x in the array using std::upper_bound
    auto lst = upper_bound(arr, arr + n, x);
    
    // Calculate the first and last index of x in the array
    int fidx = fst - arr; // First index of x
    int lidx = lst - arr; // Last index of x
    
    // Return the count of occurrences of x in the array (last index - first index)
    return lidx - fidx;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends