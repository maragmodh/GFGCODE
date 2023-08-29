//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        unordered_set<char> s;
        for(char c: str)
            s.insert(c);
        int n = s.size();
        unordered_map<char, int> m;
        int ans = str.size();
        int i=0, j=0;
        while(i<str.size())
        {
            m[str[i]]++;
            if(m.size()==n)
            {
                 while(m[str[j]]>1)
                 {
                     m[str[j]]--;
                     j++;
                 }
                 ans= min(ans, i-j+1);
            }
            i++;
        }
        return ans;  
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends