//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    // max mathi min bad krie to max j re e concept no use
    
    int maxVal(int a[], int n) {
        int mxe = INT_MIN; // 'mxe' holds the maximum difference (initialized to the smallest possible integer value)
    int mn = INT_MAX;  // 'mn' holds the minimum difference (initialized to the largest possible integer value)

    // Iterate through the array elements
    for (int i = 0; i < n; i++) {
        // Calculate the difference between the array element 'a[i]' and its index 'i',
        // then update 'mxe' with the maximum difference and 'mn' with the minimum difference
        mxe = max(mxe, a[i] - i);
        mn = min(mn, a[i] - i);
    }

    // The result is the difference between the maximum difference ('mxe') and the minimum difference ('mn')
    return mxe - mn;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.maxVal(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends