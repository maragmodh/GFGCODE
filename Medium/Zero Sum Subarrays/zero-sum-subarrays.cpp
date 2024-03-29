//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n) {
    map<long long int, int>mp;  // Map to store the cumulative sum and its frequency
    long long sum = 0; // Variable to store the cumulative sum
    long long ans = 0;// Variable to store the count of subarrays with equal 0-sum
    
    mp[0] = 1; // Initialize the frequency of 0-sum as 1, as an empty subarray has sum 0
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];  // Calculate the cumulative sum
        ans += mp[sum];// Add the frequency of the current cumulative sum to the answer
        mp[sum]++;//Increment the frequency of the current cumulative sum
    }
    
    return ans;     // Return the count of subarrays with equal 0-sum
}

};


//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends