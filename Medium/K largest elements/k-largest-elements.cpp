//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        priority_queue<int,vector<int>,greater<int>> q;
        vector<int>v;
        for (int i = 0; i < k; i++)
            q.push(arr[i]);
        for (int i = k; i < n; i++) {
            if (arr[i] > q.top()) {
                q.pop();
                q.push(arr[i]);
            }
        }
        while (!q.empty()) {
            v.push_back(q.top());
            q.pop();
        }

    // Reverse the vector to get the largest elements first
        reverse(v.begin(),v.end());
        return v;
        }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}

// } Driver Code Ends