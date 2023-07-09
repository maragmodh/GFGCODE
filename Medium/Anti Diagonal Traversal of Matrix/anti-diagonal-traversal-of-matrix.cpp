//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>>A) 
    {
        // Code here
        vector<int>a;
        int n = A.size();
        int row=0,col=0;
        while(col<n){
            int r=row;
            int c=col;
            while(r<n and c>=0){
                a.push_back(A[r][c]);
                r++;
                c--;
            }
            col++;
        }
        col--;
        row=1;
        while(row<n){
            int r=row;
            int c=col;
            while(r<n and c>=0){
                a.push_back(A[r][c]);
                r++;
                c--;
            }
            row++;
        }
        return a;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends