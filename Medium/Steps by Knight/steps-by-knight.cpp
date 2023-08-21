//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int n)
	{
	   int x1=KnightPos[0]-1;
	   int y1=KnightPos[1]-1;
	   int x2=TargetPos[0]-1;
	   int y2=TargetPos[1]-1;
	   
	   int vis[1001][1001]={0};
	   
	   queue<pair<int,int>> q;
	   q.push({x1,y1});
	   
	   while(!q.empty())
	   {
	       int i=q.front().first;
	       int j=q.front().second;
	       q.pop();
	       
	       if(i-2>=0 and j-1>= 0 and vis[i-2][j-1]==0)
	       {
	           q.push({i-2,j-1});
	           vis[i-2][j-1]=vis[i][j]+1;
	       }
	       
	        if(i-2>=0 and j+1<n and vis[i-2][j+1]==0)
	       {
	           q.push({i-2,j+1});
	           vis[i-2][j+1]=vis[i][j]+1;
	       }
	       
	        if(i+1<n and j+2< n and vis[i+1][j+2]==0)
	       {
	           q.push({i+1,j+2});
	           vis[i+1][j+2]=vis[i][j]+1;
	       }
	       
	        if(i-1>=0 and j+2<n and vis[i-1][j+2]==0)
	       {
	           q.push({i-1,j+2});
	           vis[i-1][j+2]=vis[i][j]+1;
	       }
	       
	        if(i+2<n and j+1<n and vis[i+2][j+1]==0)
	       {
	           q.push({i+2,j+1});
	           vis[i+2][j+1]=vis[i][j]+1;
	       } 
	       
	        if(i+2<n and j-1>=0 and vis[i+2][j-1]==0)
	       {
	           q.push({i+2,j-1});
	           vis[i+2][j-1]=vis[i][j]+1;
	       }
	       
	        if(i+1<n and j-2>= 0 and vis[i+1][j-2]==0)
	       {
	           q.push({i+1,j-2});
	           vis[i+1][j-2]=vis[i][j]+1;
	       } 
	       
	       
	        if(i-1>=0 and j-2>= 0 and vis[i-1][j-2]==0)
	       {
	           q.push({i-1,j-2});
	           vis[i-1][j-2]=vis[i][j]+1;
	       }
	       
	   }
	   
	   return vis[x2][y2];
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends