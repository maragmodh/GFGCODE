//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> arrayForm(int a, int b, int c) {
        // code here
        vector<int> arrayForm1;
        arrayForm1.push_back(a);
        arrayForm1.push_back(b);
        arrayForm1.push_back(c);
        return arrayForm1;

    }

    string stringForm(int a, int b, int c) {
        // code here
        string d = to_string(a) + to_string(b) + to_string(c);
        return d;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution obj;
        vector<int> res = obj.arrayForm(a, b, c);
        for (auto x : res) cout << x << " ";
        cout << "\n";
        cout << obj.stringForm(a, b, c) << "\n";
    }
    return 0;
}
// } Driver Code Ends