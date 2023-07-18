//{ Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    int i=0,j=1,k=1,cnt=0;
	    int n = s.length();
	    while(i<n-1 && j<n){
	        if(s[i]==s[j])
	            i++,j++,cnt++;
	        else if(s[i]!=s[j]){
	            i=0;k++,cnt=0;
	            j=k;
	        }
	    }
	    return cnt;
	}
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