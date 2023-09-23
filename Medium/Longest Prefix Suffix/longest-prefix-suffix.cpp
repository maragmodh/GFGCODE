//{ Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution{
  public:		
    //KMP algorithm
    int lps(string s) {
	int i = 1, j = 0;  // Pointers for comparison and indexing
    int lps[s.size()] = {0};  // LPS array to store the longest proper prefix which is also a suffix

    while (i < s.size()){
        if (s[i] == s[j]){  // Characters match, increment both pointers
            lps[i] = j + 1;  // Set the LPS value at current index
            i++;
            j++;
        }else{
            if(j==0){
                // lps[i] = 0;  // No matching prefix found, set LPS value as 0
                i++;
            }else
                j = lps[j - 1];  // Jump j to the previous character's LPS value
        }
    }

    return lps[s.size() - 1]; 
    }// Return the LPS
};


//{ Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

// } Driver Code Ends