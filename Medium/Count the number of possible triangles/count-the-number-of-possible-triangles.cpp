//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        sort(arr, arr + n); // Sorting the array in ascending order
        int cnt = 0;
        for (int i = n-1; i > 1; i--)
        {
            int l = 0;
            int r = i - 1;
            while (l < r)
            {
                if (arr[l] + arr[r] > arr[i])
                {
                    // If the sum of two smaller sides is greater than the largest side,
                    // it forms a valid triangle.
                    // Since the array is sorted, all elements between l and r will also
                    // satisfy the condition.
                    cnt += (r - l);
                    r--;
                }
                else
                    l++;
            }
        }
        return cnt;
    }
};



//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}
// } Driver Code Ends