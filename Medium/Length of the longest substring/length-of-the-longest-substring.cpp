//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        vector<int> v(256,0);
        int j=0,n=s.size(),i=0;
        int ans=0;
        while(j<n){
            v[s[j]]++;
            if(v[s[j]]==1){
                ans=max(ans,j-i+1);
                j++;
            }
            else{
                while(v[s[j]]>1){
                    v[s[i]]--;
                    i++;
                }
                ans=max(ans,j-i+1);
                j++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends