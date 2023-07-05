//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    bool knows(int a,int b,vector<vector<int> >& M){
        return M[a][b];
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        for(int i=0;i<n;i++)
            st.push(i);
        int count=0;
        while(count<n-1){
            int first = st.top();
            st.pop();
            int sec = st.top();
            st.pop();
            if(knows(first,sec,M))
                st.push(sec);
            else
                st.push(first);
            count++;
        }
        int ans = st.top();
        for(int i=0;i<n;i++)
          {
              if(i!=ans)
              {
                  if(M[ans][i]==1||M[i][ans]==0)
                    return -1;
 //ans --> i ko jaan ta hai ya i -->ans ko
 //ni jaan ta tho ans celebrity ni 
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
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends