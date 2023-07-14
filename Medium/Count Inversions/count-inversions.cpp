//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long cnt=0;
    void merge(long long arr[], long long l, long long m, long long r)
    {
         // Your code here
         vector<long long>temp;
         long long left=l;
         long long right=m+1;
         while(left<=m && right<=r){
             if(arr[left]<=arr[right]){
                 temp.push_back(arr[left]);
                 left++;
             }
             else{
                temp.push_back(arr[right]);
                right++; 
                cnt += (m - left + 1);
             }
         }
         
         while(left<=m){
             temp.push_back(arr[left]);
                 left++;
         }
         while(right<=r){
             temp.push_back(arr[right]);
                 right++;
         }
// This is for putting back all the element from temp array to original array
         for(long long i=l;i<=r;i++){
             arr[i]=temp[i-l];
         }
    }
    // public:
    void mergeSort(long long arr[], long long l, long long r)
    {
        //code here
        if (l >= r)
        return; // Returns recursively
 
        long long m= l - (l - r) / 2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        mergeSort(arr, 0, N - 1);
        return cnt;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends