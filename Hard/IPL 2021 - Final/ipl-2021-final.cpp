//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        vector<int> v = {-1};
        int ans = 0;
        for (int i = 0; i <s.size(); i++)
            if (s[i] == '(') 
                v.push_back(i);
            else if (v.size() == 1) 
                v[0] = i;
            else {
                v.pop_back();
                ans = max(ans, i - v.back());
            }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends