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
        // code here
        int i=0;
        string result;
        while(i<S.length()){
        // while(i<S.length() && S[i] == '.')
        //     i++;
        if(i>=S.length()) break;
        int j = i+1;
        while(j<S.length() && S[j] != '.')
            j++;
        string w = S.substr(i,j-i);
        if(result.length()==0) result = w;
        else result = w + '.' + result;
        i = j+1;
        }
        return result;
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