//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
         vector<int> result;
         int maxIndex = 0;
    
    // Find the maximum element in the first window of size k
        for(int i = 1; i < k; ++i) {
            if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }
    
    // Process each subsequent window
        result.push_back(arr[maxIndex]);
    
    // Process each subsequent window
    for (int i = k; i < n; ++i) {
        // If the previous maximum is still within the current window, compare it with the new element
        if (maxIndex >= i - k + 1 && arr[i] < arr[maxIndex]) {
            result.push_back(arr[maxIndex]);
        }
        // Otherwise, find the maximum element in the current window
        else {
            maxIndex = i - k + 1;
            for (int j = i - k + 2; j <= i; ++j) {
                if (arr[j] > arr[maxIndex])
                    maxIndex = j;
            }
            result.push_back(arr[maxIndex]);
        }
    }
    
    return result;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends