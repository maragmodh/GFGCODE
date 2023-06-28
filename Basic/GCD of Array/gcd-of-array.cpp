//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	int gcd(int a,int b){
	    if(a==0)
	        return b;
	        
	    return gcd(b%a,a);
	}
    int gcd(int N, int arr[])
    {
    	// Your code goes here
    	int a = 0;
    	for(int i=0;i<N;i++)
    	    a = gcd(a,arr[i]);
    	  
    	return a;
    }
};


//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        int arr[N];
        for(int i = 0; i < N; i++)
        	cin >> arr[i];
        Solution ob;
       	cout <<  ob.gcd(N, arr) << "\n";
   
    }
    return 0;
}
// } Driver Code Ends