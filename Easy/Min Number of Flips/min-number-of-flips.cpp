//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    // your code here
    int flips=0;
    for(int i=0;i<S.length();i++){
        if(i%2==0){
            if(S[i]=='0')
                flips++;
        }
        else if(i%2!=0){
            if(S[i]=='1')
                flips++;
        }
    }
    int n = S.length()-flips;
    return min(flips,n);
}