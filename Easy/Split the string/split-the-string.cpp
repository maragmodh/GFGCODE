//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{   
public:
    int isPossible(string S){
        //Code Here
        set<char> st(S.begin(),S.end());
        if(st.size()<=3 && S.size()<=5) return 0;
        return 1;
    }
};
    

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.isPossible(s)<<"\n";
    }
    return 0; 
}
// } Driver Code Ends