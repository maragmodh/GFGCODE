//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> arr, int n, int m)
        {
            // your code here
        int col = m-1;
	    int row = -1;
	    for(int i=0;i<n;i++){
	        for(int j=col;j>=0;j--){
	            if(arr[i][j]==1)
	            {
	                col--;
	                row=i;
	            }
	            else
	                break;
	        }
	    }
	    return row;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends