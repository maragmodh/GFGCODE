//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string s){
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

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends