//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{   
public:
    int isPossible(string S){
        //Code Here
        int n = S.length();
        string curr = "";
        unordered_set<string>st;
        for(int i = 0;i<n;i++){
            curr += S[i];
            if(st.find(curr) == st.end()){
                st.insert(curr);
                curr = "";
            }
            if(st.size() == 4){
                return 1;
            }
            
        }
        return 0 ;
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