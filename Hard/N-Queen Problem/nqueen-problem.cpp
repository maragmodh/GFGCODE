//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void addintoans(vector<vector<int>>&board,vector<vector<int>>&ans,int n){
        vector<int>temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[j][i]==1)
                    temp.push_back(j+1);
            }
        }
        ans.push_back(temp);
    }
    bool isSafe(int row,int col,vector<vector<int>>&board,int n){
        int x = row;
        int y = col;
        //row check
        while(y>=0){
            if(board[x][y]==1)
                return false;
            y--;
        }
        // diagonal check
        x = row;
        y = col;
        while(x>=0 && y>=0){
            if(board[x][y]==1)
                return false;
            x--;
            y--;
        }
        x = row;
        y = col;
        //diagonal check bottom-left to top-right
        while(x<n && y>=0){
            if(board[x][y]==1)
                return false;
            x++;
            y--;
        }
        return true;
        
    }
    void solve(int col,vector<vector<int>>&board,vector<vector<int>>&ans,int n){
        //base case
        if(col==n){
            addintoans(board,ans,n);
            return;
        }
        
        // check for 1st case
        // Recursive case: Try placing a queen in each row of the current column
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col] = 1;
                // Explore further by moving to the next column
                solve(col+1,board,ans,n);
                //backtrack
                board[row][col] = 0;
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>board(n,vector<int>(n,0));
        vector<vector<int>>ans;
        solve(0,board,ans,n);
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends