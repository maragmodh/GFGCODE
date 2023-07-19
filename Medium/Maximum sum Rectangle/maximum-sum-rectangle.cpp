//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        int ans = INT_MIN;
        for(int i=0;i<C;i++){
            int dp[R]={0};
            for(int j=i;j<C;j++){
                int curr = 0;
                for(int r=0;r<R;r++){
                   dp[r] += M[r][j];
                   curr += dp[r];
                   if(curr>ans) ans = curr;
                   if(curr<0) curr = 0;
               }
           }
       }
       return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}
// } Driver Code Ends