//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	// Your code goes here
    	unordered_map<char,int>mp;
    	for(auto i:A)
    	    mp[i]++;            // geeks marag nhuj
    	                        // margs eekag nhuj
    	for(auto i:B)
    	    mp[i]--;
    	for(auto i:mp)
    	if(i.second !=0)
    	    return -1;
    	    
    	int count =0,i=A.size()-1,j=B.size()-1;
    	while(i>=0){
    	    if(A[i]==B[j]){
    	        i--;j--;
    	    }
            else{
    	    count++;
    	    i--;
            }
    	}
    	return count;
    }
};

//{ Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}
// } Driver Code Ends