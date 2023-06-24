//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         int n=intervals.size();
         sort(intervals.begin(),intervals.end());
         int s=intervals[0][0],e=intervals[0][1];
         vector<vector<int>>ans;
         for(int i=1;i<n;i++){
             if(intervals[i][0]<=e)e=max(e,intervals[i][1]);
             else{
                 ans.push_back({s,e});
                 s=intervals[i][0],e=intervals[i][1];
             }
         }
         ans.push_back({s,e});
         return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends