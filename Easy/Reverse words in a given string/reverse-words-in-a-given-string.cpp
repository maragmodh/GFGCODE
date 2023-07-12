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
        int n = S.size();
        string ans ="";
        int i = n-1;
        int j = n-1;
        while(i >= 0){
            if(S[i] =='.'){
                ans += S.substr(i+1,j-i);//position,length
                ans.push_back('.');
                j = i-1;
            }   
            i--;
        }
        ans += S.substr(i+1,j-i);
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