//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int kadane(vector<int> &v,int n){
        int maxsum = INT_MIN;
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum+=v[i];
            maxsum = max(sum,maxsum);
            if(sum<0)
                sum = 0;
        }
        return maxsum;
    }
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        // code here
        //int max = maxsumsubArray(arr[0], arr[0].length);
        int maxsum = INT_MIN;
        for(int i = 0;i<R;i++){
    // Create a vector v to store the cumulative sum of elements in each column
            vector<int>v(C);
            for(int j=i;j<R;j++){
                for(int k = 0;k<C;k++){
        // Add the elements of the current row to the cumulative sum of each column
                    v[k]+=M[j][k];
                }
                int sum = kadane(v,C);
                if(sum>maxsum){
                    maxsum = sum;
                }
            }
        }
        return maxsum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}
// } Driver Code Ends