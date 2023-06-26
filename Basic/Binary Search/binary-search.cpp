//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int st =0;
        int mid=0;
        int tgt = k;
        int end=n-1;
        while ( st <= end)  
        {  
        mid = ( st + end ) / 2;  
        if (arr[mid] == tgt)  
            return mid;
        // check the value of target element is greater than the mid element' value  
        else if ( tgt > arr[mid])  
            st = mid + 1; // set the new value for st variable  
        else 
            end = mid - 1; // set the new value for end variable  
    }  
    // cout << " Number is not found. " << endl;  
    return -1;  
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends