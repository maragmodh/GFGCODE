//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Check if the sum of row number and column number is even
            if ((i + j) % 2 == 0)
                cout << "1 ";
            else 
                cout << "0 ";
            }
        std::cout << std::endl;
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends