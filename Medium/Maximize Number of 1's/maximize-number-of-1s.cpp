//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    //CPP Sliding window approach
    int findZeroes(int arr[], int n, int m) {
        // code here
        int onsCount=0;
        int left=0;
        int right=0;
        int zeroCount=0;
        while(right<n)
        {
            if(arr[right]==0)
                zeroCount++;
            if(zeroCount>m)
            {
                if(arr[left]==0)
                    zeroCount--;
                left++;
            }
            onsCount = max(onsCount,right-left+1);
            right++;
        }
        return onsCount;
    }  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends