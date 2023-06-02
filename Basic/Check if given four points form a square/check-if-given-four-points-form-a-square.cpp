//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int fourPointSquare(vector<vector<int>> points) {
        // code here
        int a = abs(points[0][0] - points[0][1]);
        int b = abs(points[1][0] - points[1][1]);
        int c = abs(points[2][0] - points[2][1]);
        int d = abs(points[3][0] - points[3][1]);
        if(a==0 && a==b && b==c && c==d && d==a)
            return 0;;
        if(a+c==b+d)
            return 1;
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int>> points(4, vector<int>(2));
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 2; j++) cin >> points[i][j];
        Solution ob;
        cout << ob.fourPointSquare(points) << "\n";
    }
}
// } Driver Code Ends