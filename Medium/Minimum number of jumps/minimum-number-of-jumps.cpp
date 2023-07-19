//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int steps=0;// Variable to track the maximum reachable position
    int jump = 0;     // Variable to track the position to make the next jump
    int count = 0;    // Variable to count the number of jumps taken
        for(int i=0;i<n-1;i++){
            steps=max(steps,i+arr[i]);
            if(i==jump){
            count++;
            jump=steps;// Set the position for the next jump
            if(steps>=n-1)
            return count;
            
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends