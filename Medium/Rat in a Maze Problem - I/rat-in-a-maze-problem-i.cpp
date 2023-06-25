//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool isSafe(vector<vector<bool>> &vis,vector<vector<int>> &m,int n,int x,int y)
    {
        if(x<0||x>=n||y<0||y>=n)
        return false;
        
        if(vis[x][y]==1 || m[x][y]==0)
        return false;
        
        return true;
    }
    void solve(int x,int y,vector<string>&ans,vector<vector<int>> &m, int n,vector<vector<bool>>&vis,string path){
        if(x==n-1&&y==n-1)
        {
            ans.push_back(path);
            return;
        }
        vis[x][y] = 1;
        
        if(isSafe(vis,m,n,x+1,y))
        solve(x+1,y,ans,m,n,vis,path+'D');
        
        if(isSafe(vis,m,n,x-1,y))
        solve(x-1,y,ans,m,n,vis,path+'U');
        
        if(isSafe(vis,m,n,x,y+1))
        solve(x,y+1,ans,m,n,vis,path+'R');
        
        if(isSafe(vis,m,n,x,y-1))
        solve(x,y-1,ans,m,n,vis,path+'L');
        
        vis[x][y] = 0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<vector<bool>>visited(n,vector<bool>(n,0));
        string path = "";
        if(m[0][0]==0)
            return ans;
        solve(0,0,ans,m,n,visited,path);
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends