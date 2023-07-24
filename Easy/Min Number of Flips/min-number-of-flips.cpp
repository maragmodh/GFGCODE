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
    int flips = 0; // Counter to keep track of the flips needed
    for (int i = 0; i < S.length(); i++) {
        if (i % 2 == 0) { // For even-indexed characters in the string
            if (S[i] == '1') // If the character is '1'
                flips++; // Increment the flips counter
        } else if (i % 2 != 0) { // For odd-indexed characters in the string
            if (S[i] == '0') // If the character is '0'
                flips++; // Increment the flips counter
        }
    }

    int n = S.length() - flips; // Count of characters that need to be flipped to get a pattern like 010101...
    return min(flips, n); 
}