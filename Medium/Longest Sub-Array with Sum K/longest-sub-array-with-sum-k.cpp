//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<int,int> m;
        m[0]=-1;
        int sum=0,ans=0;
        for (int i=0;i<N;i++){
            sum+=A[i];
            int x=sum-K;
            //checking if remaining sum exists
            if(m.find(x)!=m.end())  ans=max(ans,i-m[x]);
            //keeping track of prefix sum
            if(m.find(sum)==m.end()) m[sum]=i;
        }
        return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends