//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        // if(arr[0]==0 && arr[1]==1)
        //     return 2;
        // if(arr[0]==0)
        //     return 1;
        // sort(arr,arr+n);
        // vector<int>v;
        // for(int i=0;i<n;i++){
        //     if(arr[i]>=0)
        //         v.push_back(arr[i]);
        // }
        // for(int i=0;i<n;i++){
        //     if(arr[i]+1 ==arr[i+1])
        //         continue;
        //     else
        //         return arr[i];
        // }
        sort(arr, arr+n);
        int num = 1;
        for (int i = 0; i < n; i++)
            if (arr[i] == num) 
                num++;
        return num;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends