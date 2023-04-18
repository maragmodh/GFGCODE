//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
	    vector<int>v;
	for(int col=0,row = 0; col<N; col++)
 {
     int i=row;
     int j=col;
     while(j >=0 && i < N)

     {

         v.push_back(A[i][j]);

         i++;

         j--;

     }

 }

 for(int row=1,col=N-1; row<N; row++)

 {

     int i=row;

     int j=col;

     while(j >=0 && i < N)

     {

         v.push_back(A[i][j]);

         i++;

         j--;

     }

 }
    return v;
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