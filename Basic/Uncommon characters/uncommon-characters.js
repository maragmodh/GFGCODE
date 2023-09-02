//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            vector<int> arr(256,0);
            string ans = "";
            for(auto it: A) 
                if(arr[it]==0) arr[it] = 2;
            
            for(auto it: B) {
                if(arr[it]==2) arr[it] = -1;
                else if(arr[it]==0) arr[it] = 1;
            }
    
            for(int i = 0; i < 256; i++)
                if(arr[i]>0) ans+=(i);
            
            return (ans=="") ? "-1" : ans;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends