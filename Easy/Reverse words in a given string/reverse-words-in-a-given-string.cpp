//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string ans="";
        string res="";
        for(int i =S.size()-1; i>=0; i--)
        {
           if(S[i]=='.')
           {
               reverse(res.begin(),res.end());
               ans+=res;
               res.erase(res.begin(),res.end());
               ans+=".";
               continue;
           }
           res+=S[i];
       }
       reverse(res.begin(),res.end());
       ans+=res;
       return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends