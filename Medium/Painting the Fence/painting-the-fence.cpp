//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends

#define mod 1000000007
using ll = long long;
class Solution{
    public:
    long long add(int a,int b){
        return (a%mod + b%mod)%mod;
    }
    long long mul(int a,int b){
        return ((a%mod) * 1ll * (b%mod))%mod;
    }
    long long countWays(int n, int k){
        // code here
        vector<int>dp(n+1);
        dp[1]=k;
        dp[2]=add(k,mul(k,k-1));
        for(int i=3;i<=n;i++){
            dp[i] = add(mul(dp[i-2],k-1) ,mul(dp[i-1],k-1));
        }
        return dp[n];
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends