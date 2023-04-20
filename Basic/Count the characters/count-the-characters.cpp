//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
        int getCount (string S, int N)
        {
            int count=0;
            unordered_map<char,int>mpp;
            char ch=' ';
            for(int i=0;i<S.size();i++){
                if(ch==S[i]){
                    continue;
                }
                mpp[S[i]]++;
                ch=S[i];
            }
            for(auto it:mpp){
                if(it.second==N){
                    count++;
                }
            }
            return count;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends