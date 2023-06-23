//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s, string t)
    {
        if(s.length()!=t.length())
            return false;
        vector<int> mpS(256, 0) , mpT(256, 0);
        for(int index=0; index<s.size(); index++){
            if(mpS[s[index]]  !=  mpT[t[index]] )
                return false;
            mpS[s[index]] = index+1;
            mpT[t[index]] = index+1;
        }
        return true ;
        // Your code here
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends