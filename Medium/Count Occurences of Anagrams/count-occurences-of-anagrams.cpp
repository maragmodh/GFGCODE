//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    vector<int>pattern(256,0);
	    vector<int>text(256,0);
	    int n = pat.size();
	    int m = txt.size();
	    int val;
	    for(int i=0;i<n;i++){
	        pattern[pat[i]]++;
	        text[txt[i]]++;
	    }
	    int c = 0;
	    if(pattern == text)
	        c++;
	    int i=0,j=n;
	    while(j<m){
	        text[txt[j]]++;
	        text[txt[i]]--;
	        if(pattern==text)
	            c++;
	        i++;
	        j++;
	    }
	    return c;
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