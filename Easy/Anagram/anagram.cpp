//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
     bool isAnagram(string a, string b){
        unordered_map<char,int>count;
        for(auto x : a)
             count[x]++;
        
        for(auto x : b)
             count[x]--;

        for(auto x : count){
             if(x.second != 0)
                return false;
         }
        return true;
}

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends