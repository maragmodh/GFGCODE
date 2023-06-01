//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// #include<istream>
class Solution {
public:
    void bst(vector<int>&ans,vector<int>v,int i,int j){
        if(i>j)
            return;
        int mid = (i+j)/2;
        // Node* nod = new node(v[mid]);
        ans.push_back(v[mid]);
        bst(ans,v,i,mid-1);
        bst(ans,v,mid+1,j);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>ans;
        bst(ans,nums,0,nums.size()-1);
        return ans;
    //  void solve(vector<int>&ans,vector<int>v,int s,int e)
    // {
    //     if(s>e)
    //         return;
    //     int mid=(s+e)/2;
    //     ans.push_back(v[mid]);
    //     solve(ans,v,s,mid-1);
    //     solve(ans,v,mid+1,e);
    // }
    // vector<int> sortedArrayToBST(vector<int>& nums) {
    //     vector<int>ans;
    //     solve(ans,nums,0,nums.size()-1);
    //     return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends