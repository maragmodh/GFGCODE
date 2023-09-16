//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    vector<int> longestCommonPrefix(string str1, string str2){
        // code here
        vector<int>v(2,-1);
         for(int i=1;i<str1.length();i++){
         if(str2.find(str1.substr(0,i))==string::npos)
             continue;
         else{
            v[0] =  0;
            v[1] = i-1;
         }
    }
 return v;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string str1,str2;
        cin >> str1>> str2;
        Solution ob;
        vector<int> p;
        p = ob.longestCommonPrefix(str1,str2);
        if(p[0]==-1)
        cout<<"-1\n";
        
        else
        cout<<p[0]<<" "<<p[1]<<"\n";
    }
    return 0;
}

// } Driver Code Ends