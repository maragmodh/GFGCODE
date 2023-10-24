//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    void recursion(int N,vector<int> &ans)
    {
        if(N==1)
        {
            ans.push_back(1);
            return;
        }
        recursion(N-1,ans);
        int carry=0;
        for(int i=0;i<ans.size();i++)
        {
            int t=ans[i]*N+carry;
            ans[i]=t%10;
            carry=t/10;
        }
        while(carry!=0)
        {
            ans.push_back(carry%10);
            carry/=10;
        }
        return;
    }
    vector<int> factorial(int N){
        // code here
        vector<int>ans;
        recursion(N,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends