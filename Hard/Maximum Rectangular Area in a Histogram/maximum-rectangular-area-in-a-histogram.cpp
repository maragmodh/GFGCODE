//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// class Solution
class Solution {
public:
    // Function to find the largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n) {
        stack<long long> st; // Stack to store indices of histogram bars
        long long ma = 0; // Variable to store the maximum area
        long long i = 0; // Variable for iterating through the histogram
        while (i < n) {
            if (st.empty() || arr[st.top()] <= arr[i]) {
                st.push(i); // If stack is empty or current bar is greater than or equal to the top bar of the stack, push the current index to the stack
                i++;
            } else {
                long long tp = st.top(); // Store the top index of the stack
                st.pop(); // Pop the top index from the stack
    // Calculate the area of the rectangle with the popped bar as the smallest bar
                long long ans = arr[tp] * (st.empty() ? i : i - st.top() - 1); 
                ma = max(ans, ma); // Update the maximum area
            }
        }
        while (!st.empty()) {
            long long tp = st.top(); // Store the top index of the stack
            st.pop(); // Pop the top index from the stack
    // Calculate the area of the rectangle with the popped bar as the smallest bar
            long long ans = arr[tp] * (st.empty() ? i : i - st.top() - 1); 
            ma = max(ans, ma); // Update the maximum area
        }
        return ma; // Return the maximum area
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends