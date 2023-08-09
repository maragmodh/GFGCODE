//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int N) {
        // code here
        vector<int>v;
        // Calculate the highest power of 2 that is less than or equal to N
        int m=log2(N);
        // Calculate the largest binary number with m+1 bits (all bits set to 1)
        int x = pow(2,m+1)-1;
         // Calculate the difference between N and the largest binary number
        v.push_back(abs(N-x));
        v.push_back(x);
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends