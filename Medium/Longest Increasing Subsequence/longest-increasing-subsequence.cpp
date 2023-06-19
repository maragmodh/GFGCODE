//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
// IT IS A DP SOLUTION AND IT IS RIGHT BUT NOT WORKING AFTER 111 TC
{
    public:
    //Function to find length of lo11ngest increasing subsequence.
    // int solvemem(int n,int a[],int curr,int prev, vector<vector<int>>&dp){
    //     if(curr>=n)
    //         return 0;
    //     if(dp[curr][prev+1]!=-1)
    //         return dp[curr][prev+1];
    //     //take
    //     int incl=0,excl=0;
    //     if(prev==-1 || a[curr]>a[prev] )
    //         incl = 1 + solvemem(n,a,curr+1,curr,dp);
    //     excl = solvemem(n,a,curr+1,prev,dp);
    //     // int maxi = ;
    //     // dp[curr][prev+1] = maxi;
    //     return dp[curr][prev+1]=max(incl,excl);
    // }
    int longestSubsequence(int n, int a[]){
    // {
    //   // your code here
    //   vector<vector<int>>dp(n,vector<int>(n+1,-1));
    //   return solvemem(n,a,0,-1,dp);
        vector<int>temp;
        for(int i=0 ; i<n ; i++){
           int ind=lower_bound(temp.begin(),temp.end(),a[i])-temp.begin();
           if(ind>=temp.size())
               temp.push_back(a[i]);
           else
               temp[ind]=a[i];
       }
       return temp.size();
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends