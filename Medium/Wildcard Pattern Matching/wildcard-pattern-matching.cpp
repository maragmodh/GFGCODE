//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
/*You are required to complete this method*/
    int LOL(int n,int m,string& p,string& s,vector<vector<int>>& dp){
        if(n<0 && m<0) return 1;
        if(n<0 && m>=0) return 0;
        if(n>=0 && m<0){
            for(int i=0;i<=n;i++){
                if(p[i]!='*') 
                    return 0;
            }
            return 1;
        }
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(p[n]==s[m] || p[n]=='?') 
            return dp[n][m]=LOL(n-1,m-1,p,s,dp);
        else if(p[n]=='*')
            return dp[n][m]=LOL(n-1,m,p,s,dp)|LOL(n,m-1,p,s,dp);
            
        return dp[n][m]=0;

    }
    int wildCard(string pattern,string str)
    {
        int n=pattern.size(); int m=str.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return LOL(n-1,m-1,pattern,str,dp);

    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
           string pat,text;
           cin>>pat;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
           cin>>text;
           Solution obj;
           cout<<obj.wildCard(pat,text)<<endl;
   }
}

// } Driver Code Ends