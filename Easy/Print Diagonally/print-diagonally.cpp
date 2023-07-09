//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
	 vector<int>a;
        int n = A.size();
        int row=0,col=0;
        while(col<n){
            int r=row;
            int c=col;
            while(r<n and c>=0){
                a.push_back(A[r][c]);
                r++;
                c--;
            }
            col++;
        }
        col--;
        row=1;
        while(row<n){
            int r=row;
            int c=col;
            while(r<n and c>=0){
                a.push_back(A[r][c]);
                r++;
                c--;
            }
            row++;
        }
        return a;
    }

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDiagonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends