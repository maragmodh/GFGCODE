//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
/*You are required to complete this method*/
    int solvemem(string& pat,string &str,int i,int j,vector<vector<int>>&dp)
    {
        if(i<0 && j<0)
            return 1;
        if(i>=0 && j<0)
            return 0;
        if(i<0 && j>=0){
            for(int k=0;k<=j;k++){
                if(pat[k] !='*')
                    return 0;
            }
            return 1;
        }
        if(dp[i][j] != -1)
            return dp[i][j];
        if(str[i]==pat[j] || pat[j] == '?')
            return dp[i][j] = solvemem(pat,str,i-1,j-1,dp);
        else if(pat[j] == '*')
            return dp[i][j] = (solvemem(pat,str,i-1,j,dp) | solvemem(pat,str,i,j-1,dp));
        
        else
            return dp[i][j]=0;
    }
    int wildCard(string pat,string str)
    {
        vector<vector<int>>dp(str.length(),vector<int>(pat.length(),-1));
        return solvemem(pat,str,str.length()-1,pat.length()-1,dp);
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