//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void BackTrackingSol(string &S, int i, vector<string> &ans)
	    {   
	        if(i>=S.length())
	           ans.push_back(S);
	        for(int j = i; j<S.length(); j++)
	            {
	               swap(S[i],S[j]);
	               BackTrackingSol(S,i+1,ans);
	               swap(S[i],S[j]);
	            }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		  //  int index = 0;
		    vector<string> v;
		    BackTrackingSol(S,0,v);
		    sort(v.begin(),v.end());
            v.erase(unique(v.begin(), v.end()), v.end());
		    return v;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends