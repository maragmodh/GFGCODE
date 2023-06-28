//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string replaceAll(string str, string oldW, string newW) {
        // code here
        // int count=0;
        // for(int i=0;i<str.length();i++){
        //     if(str[i]==oldW[i])
        //         continue;
        //         count++;
        // }
        // for(int i=0;i<str.length();i++){
        //     if(str[i]==oldw[i]){
        //         continue;
        //         count--;
        //     }
        //     if(count==0)
                
        // }
        int s=oldW.length();
        string temp="";
        for(int i=0;i<str.length();i++){
            if(str.substr(i,s)==oldW){
            temp+=newW;
            i+=s-1;
            }
            else
            temp+=str[i];
            
        }
        return temp;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string S, oldW, newW;
        getline(cin, S);
        getline(cin, oldW);
        getline(cin, newW);
        Solution ob;
        cout << ob.replaceAll(S, oldW, newW) << endl;
    }
    return 0;
}

// } Driver Code Ends