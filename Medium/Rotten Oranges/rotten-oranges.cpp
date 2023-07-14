//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int r=grid.size();
        int c=grid[0].size();
        // Create a queue to store the coordinates of rotten oranges and their time
        queue<pair<pair<int,int>,int>>q; //{{r,c},t}
        int vis[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
            // If an orange is rotten, add its coordinates and time 0 to the queue
            // Set the visited status of the cell to 2
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else
                    vis[i][j]=0;
            }
        }
        int tm=-1;   //Maximum time to rot all oranges
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};
        // Perform BFS until the queue is empty
        while(!q.empty()){
            int row = q.front().first.first;
            int col =  q.front().first.second;
            int t = q.front().second;
            tm=max(tm,t);
            q.pop();
            // Check each neighbor in all four directions
            for(int i=0;i<4;i++){
                int nrow = row +drow[i];
                int ncol = col +dcol[i];
                if(nrow<r && ncol<c && nrow>=0 && ncol>=0
                && vis[nrow][ncol] ==0 && grid[nrow][ncol]==1){
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol]=2;
                }
            }
        }
    // Check if there are any remaining fresh oranges (1) in the grid
    // If so, return -1 to indicate that not all oranges can be rotten
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(vis[i][j]!=2 && grid[i][j]==1)
                    return -1;
            }
        }
        return tm;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends