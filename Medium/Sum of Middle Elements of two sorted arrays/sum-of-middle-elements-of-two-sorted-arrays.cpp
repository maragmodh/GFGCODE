//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int arr1[], int arr2[], int n) {
        int left=n-1;
        int right=0;
        while(left>=0 && right<n)
        {
            if(arr1[left]>arr2[right])
            {
                swap(arr1[left--],arr2[right++]);
            }
            else    
                break;
        }
        int el1 = *max_element(arr1,arr1+n);
        int el2 = *min_element(arr2,arr2+n);
        return  el1+el2;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends