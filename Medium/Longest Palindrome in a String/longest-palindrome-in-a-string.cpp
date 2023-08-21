//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
    int start = 0, end = 1; //the start and end indices of the longest palindrome
    int low,high;
    for(int i = 0; i < S.length(); i++){
        // odd part : Expand around the current character as the center
         low = i - 1;
         high = i;
        while(low>=0 && high<S.length() && S[low] == S[high]){
        // Update the start and end indices if a longer palindrome is found
            if(high - low + 1 > end){
                end = high - low + 1; 
                start = low;
            }
            low--;
            high++;
        }
        // Even part
         low = i - 1;
         high = i + 1;
        while(low>=0 && high<S.length() && S[low] == S[high]){
            if(high - low + 1 > end){
                end = high - low + 1; 
                start = low;
            }
            low--;
            high++;
        }
        
    }
     return S.substr(start,end);
}
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends