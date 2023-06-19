//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solvemem(int index,int n,int arr[],vector<vector<int>>&dp,int target){
        if(index>=n)
            return 0;
        if(target<0)
            return 0;
        if(target==0)
            return 1;
        if(dp[index][target]!=-1)
            return dp[index][target];
        // int incl=0,excl=0;
        // for(int i=0;i<n;i++){
        int incl = solvemem(index+1,n,arr,dp,target-arr[index]);
        int excl = solvemem(index+1,n,arr,dp,target);
        return dp[index][target] = incl or excl;
        
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
            sum += arr[i];
        vector<vector<int>>dp(N+1,vector<int>((sum/2)+1,-1));
        if(sum%2==0)
            return solvemem(0,N,arr,dp,sum/2);
        else
            return 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends