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
    vector <int> max_of_subarrays(int *arr, int n, int K)
    {
        vector<int> result;
        deque<int> dq; // Using a double-ended queue to keep track of the maximum element in the current window
    // Process the first K elements separately to initialize the deque
    for (int i = 0; i < K; i++) {
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    // Process the remaining elements
    for (int i = K; i < n; i++) {
        // The front of the deque contains the maximum element for the current window
        result.push_back(arr[dq.front()]); 
        // Remove elements outside the current window from the front of the deque
        while (!dq.empty() && dq.front() <= i - K)
            dq.pop_front();
        // Remove elements smaller than the current element from the back of the deque
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i); // Add the current element to the deque
    }
    result.push_back(arr[dq.front()]); // Add the maximum element for the last window to the result
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