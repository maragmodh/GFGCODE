//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        set<vector<int>>st;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int left = j+1;
                int right = n-1;
                while(left<right){
                int sum = arr[i]+arr[j]+arr[left]+arr[right];
                if(sum>k)
                    right--;
                else if(sum==k){
                    vector<int>v;
                    v.push_back(arr[i]);
                    v.push_back(arr[j]);
                    v.push_back(arr[left]);
                    v.push_back(arr[right]);
                    st.insert(v);
                    left++;
                }
                else
                    left++;
                }
            }
        }
        vector<vector<int>>ans;
        for(auto it:st)
            ans.push_back(it);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends