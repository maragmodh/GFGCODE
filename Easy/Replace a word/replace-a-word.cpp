//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string replaceAll(string str, string oldW, string newW) {
        int s=oldW.size();
        int n=str.size();
        string ans;
        for(int i=0;i<n;){
            if(str.substr(i,s)==oldW){
                ans+=newW;
                i = i + s;
            }
            else{
                ans+=str[i];
                i++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string S, oldW, newW;
        getline(cin, S);
        getline(cin, oldW);
        getline(cin, newW);
        Solution ob;
        cout << ob.replaceAll(S, oldW, newW) << endl;
    }
    return 0;
}

// } Driver Code Ends