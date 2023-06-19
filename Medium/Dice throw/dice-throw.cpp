//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long solvemem(int N , int faces , int tar,vector<vector<long long>>&dp){
        if(tar<0)
            return 0;
        if(N != 0 && tar==0)
            return 0;
        if( N==0 && tar!=0)
            return 0;
        if(N==0 && tar ==0)
            return 1;
        
        if(dp[N][tar]!=-1)
            return dp[N][tar];
        long long ans=0;
        for(int i=1;i<=faces;i++){
            ans = ans + solvemem(N-1,faces,tar-i,dp);
        }
        return dp[N][tar] = ans;
    }
    long long noOfWays(int M , int N , int X) {
        // code here
        
        vector<vector<long long>>dp(N+1,vector<long long>(X+1,-1));
        return solvemem(N,M,X,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}
// } Driver Code Ends