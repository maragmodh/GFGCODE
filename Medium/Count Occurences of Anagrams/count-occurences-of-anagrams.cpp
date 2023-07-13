//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
//SLIDING WINDOW
	int search(string pat, string txt) {
	     int m=pat.length();
	    int n=txt.length();
	    map<char,int>mm;
	    map<char,int>mtemp;
	    for(int i=0; i<m; i++)
	        mm[pat[i]]++;
	    int i=0,j=0,count=0,ans=0;
	    while(j<n)
	    {
	        mtemp[txt[j]]++;
	        if(j-i+1< m)
	            j++;
	        else
	        {
	            if(mtemp==mm)
	                count++;
	            if(mtemp[txt[i]]>1)
	                mtemp[txt[i]]--;
	            else
	                mtemp.erase(txt[i]);
	            i++;
	            j++;
	        }
	    }
	    return count;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends