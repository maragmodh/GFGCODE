//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        vector<int> stL;
        vector<int> stR;
        for(int i = 0; i<n; i++) {
            if(stL.empty() || arr[stL.back()]>arr[i]) stL.push_back(i);
            if(stR.empty() || arr[stR.back()]<arr[n-i-1]) stR.push_back(n-i-1);
        }
       
        int mx = 0;
        int x = 0;
        while(!stL.empty() && !stR.empty()) {
            int i = stL[x];
            int j = stR.back();
            if(arr[j] >= arr[i]) {
                mx = max(mx, j-i);
                stR.pop_back();
            } else
                x++;
        }
        return mx;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends