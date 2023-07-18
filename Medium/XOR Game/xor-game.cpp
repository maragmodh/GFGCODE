//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    // Bitwise AND Check: The condition (k & (k+1)) == 0 is used to check
    // if k and (k+1) have a bitwise AND equal to 0. This condition is
    // satisfied when k is a power of 2 minus 1.

// Example: For k = 3, (k & (k+1)) evaluates to (3 & 4), which is 0.
// Example: For k = 7, (k & (k+1)) evaluates to (7 & 8), which is 0.
// If this condition is true, the function returns k / 2. 
// This suggests that there is some pattern or relationship between 
// k and the returned value, specifically when k is a power of 2 minus 1.
    int xorCal(int k){
        if(k==1)
            return 2;
        if((k&(k+1))==0)
            return k/2;
        return -1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        
        Solution ob;
        cout<<ob.xorCal(k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends