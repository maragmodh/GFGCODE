//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            int dot_count = 0;
           int digit_count = 0;
           
           for(int i = 0; i < s.length(); i++)
               if(s[i] == '.')
                   dot_count++;
           if(dot_count != 3)
               return 0;
           unordered_set<string> us;
           for(int i = 0; i < 256; i++)
               us.insert(to_string(i));
           
           string temp = "";
           for(int i = 0; i < s.length(); i++){
               if(s[i] != '.')
                   temp = temp + s[i];
               else
               {
                   if(us.find(temp) != us.end())
                   {
                       digit_count++; 
                       temp = "";
                   }
               }
           }
            if(us.find(temp) != us.end())
               digit_count++;
           
            if(digit_count == 4)
               return 1;
            else
               return 0;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends