//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& arr) {
         // Code here
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    ans.push_back({arr[0][0],arr[0][1]});
    int idx=0;
    for(int i=1;i<arr.size();i++)
    {
        if(ans[idx][1] >= arr[i][0])
        {
            ans[idx][1]=max(ans[idx][1],arr[i][1]);
        }
        else
        {
            ans.push_back({arr[i][0],arr[i][1]});
            idx++;
        }
    }
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