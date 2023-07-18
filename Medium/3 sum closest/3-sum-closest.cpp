//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int arr[], int n, int X)
    {
        int minsum = INT_MAX;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            int first = arr[i];
            int start = i+1;
            int end = n-1;
            while(start<end){
                int sum = first + arr[start]+arr[end];
                if(sum==X) return sum;
                if(abs(X-sum)<abs(X-minsum)){
                    minsum = sum;
                }
                if(sum>X) end--;
                else start++;
            }
        }
        return minsum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends