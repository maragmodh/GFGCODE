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
    bool areIsomorphic(string str1, string str2)
    {
        int n1=str1.length(),n2=str2.length();
        if(n1!=n2)
        return false;
        unordered_map<char,char> m1;
        for(int i=0;i<n1;i++)
            m1[str1[i]]=str2[i];
        for(int i=0;i<n1;i++)
            if(m1[str1[i]]!=str2[i])
                return false;
        for(int i=0;i<n1;i++)
            m1[str2[i]]=str1[i];
        for(int i=0;i<n1;i++)
            if(m1[str2[i]]!=str1[i])
                return false;
        return true;
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