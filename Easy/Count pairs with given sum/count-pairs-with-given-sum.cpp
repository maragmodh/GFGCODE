//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
    //     sort(arr,arr+n);
    //     int count =0;
    //     int l=0;
    //     int r=n-1;
    //     while(l!=r){
    //         if(arr[l]+arr[r]==k){
    //             count++;
    //             // l++;
    //             r--;
    //         }
    //         else if(arr[l]+arr[k]>k)
    //             r--;
    //         else if(arr[l]+arr[k]<k)
    //             l++;
    // }
    // return count;
     unordered_map<int, int> mp;
            
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                int diff = k - arr[i];
                if (mp[diff] > 0)
                    count += mp[diff];
                mp[arr[i]]++;
            }
            return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends