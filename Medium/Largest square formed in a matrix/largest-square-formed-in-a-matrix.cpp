//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solvemem(int n, int m, vector<vector<int>>&mat,vector<vector<int>>&dp,int &maxi){
        if(n>=mat.size() || m>=mat[0].size())
            return 0;
        if(dp[n][m] != -1)
            return dp[n][m];
        
        int right = solvemem(n,m+1,mat,dp,maxi);
        int diag = solvemem(n+1,m+1,mat,dp,maxi);
        int down = solvemem(n+1,m,mat,dp,maxi);
        if(mat[n][m]==1){
            dp[n][m] = 1 + min({right,diag,down});
            maxi = max(maxi,dp[n][m]);
            return dp[n][m];
        }
        else
            return dp[n][m]=0;
    }
    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        int maxi=0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        solvemem(0,0,mat,dp,maxi);
        return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n*m;i++)
            cin>>mat[i/m][i%m];
        
        Solution ob;
        cout<<ob.maxSquare(n, m, mat)<<"\n";
    }
    return 0;
}
// } Driver Code Ends