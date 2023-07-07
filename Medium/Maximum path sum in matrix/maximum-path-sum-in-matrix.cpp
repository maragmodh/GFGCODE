//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int i , int j , int n , int m , vector<vector<int>> &v , vector<vector<int>> &dp)
    {
        if(j<0 or j>m )
            return -1e9;
        if(i==n)
            return v[n][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int down=solve(i+1 , j,n,m,v,dp)+v[i][j];
        int downleft=solve(i+1,j-1,n,m,v,dp)+v[i][j];
        int downright=solve(i+1,j+1,n,m,v,dp)+v[i][j];
        return dp[i][j]=max(down , max(downleft , downright));
    }
    int maximumPath(int N, vector<vector<int>>v)
    {
        int n=v.size();
        int m=v[0].size();
        int anss=-1e8;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<m;i++)
            anss=max(anss,solve(0,i,n-1,m-1,v,dp));
        // return solve(0,0,n-1,m-1,v);
        return anss;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends