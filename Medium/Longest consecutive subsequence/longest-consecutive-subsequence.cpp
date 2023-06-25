//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr,arr+N);
      int first = arr[0];
      int count = 1;
      int maxcount = 1;
      for(int i=1;i<N;i++){
        if(arr[i]==first)
            continue;
        if(arr[i]==first+1){
            count++;
            first = arr[i];
            maxcount = max(maxcount,count);
        }
        else{
            first = arr[i];
            count=1;
        }
      }
        
      return maxcount;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends