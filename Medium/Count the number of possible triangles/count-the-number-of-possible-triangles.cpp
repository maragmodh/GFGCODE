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
        // code here
        int triangles=0;
        sort(arr,arr+n,greater<int>());
        for(int i=0;i<n-2;i++){
            int maxSide=arr[i];
            int left=i+1,right=n-1;
            while(left<right){
                if(arr[left]+arr[right]>maxSide){
    // If the sum of two smaller sides is greater than the largest side,
    // it forms a valid triangle.
    // Since the array is sorted, all elements between l and r will also
    // satisfy the condition.
                    triangles+=right-left;
                    left++;
                }
                else
                    right--;
            }
        }
        return triangles;
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