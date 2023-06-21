//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        int n = 1;
        int ans = -1;
        int diff = 0;
        for(int i = 0; i < 6; i++)
            diff += (N-M);
        if(M > N || (M == N && S > 6) || (diff < M && S > 6))
           return -1;
        if(M == N && S <= 6)
           return S;
        while(n*N < M*S)
          n++;
        return n;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends