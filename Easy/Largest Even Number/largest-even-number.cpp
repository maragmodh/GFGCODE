//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string LargestEven(string s){
        sort(s.begin(), s.end(), greater<char>());

    // Step 2: Find the first even digit from the end of the string
    int i = s.size() - 1;
    while (i >= 0) {
        if (int(s[i]) % 2 == 0) { // Check if the character is an even digit
            // Step 3: Swap the first even digit found with the last character in the string
            swap(s[i], s[s.size() - 1]);
            break; // Exit the loop after swapping
        }
        i--; // Move to the previous character
    }

    // Step 4: Sort the string again, excluding the last character (which is the first even digit)
    sort(s.begin(), s.end() - 1, greater<char>());

    // Step 5: Return the modified string with the largest even number formed
    return s;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.LargestEven(s) << "\n";
    }
return 0;
}


// } Driver Code Ends