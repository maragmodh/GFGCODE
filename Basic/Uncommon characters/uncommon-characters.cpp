//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            string res="";
            vector<int>m1(26,0),m2(26,0);
            for(int i=0;i<A.length();i++){
                m1[A[i]-97]++;
            }
            for(int i=0;i<B.length();i++){
                m2[B[i]-97]++;
            }
            for(int i=0;i<26;i++){
                if((m1[i]==0 && m2[i] != 0) || (m1[i]!=0 && m2[i] == 0))
                    res.push_back(i+97);
            }
            if(res.length()==0)
                return "-1";
            return res;
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