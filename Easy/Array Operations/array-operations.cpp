//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
         int ans=0,c;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                for(;i<n;i++){
                    if(arr[i]!=0)break;
                    c++;
                }
                ans++;
            }
        }
        if(c==n)return 0;
        if(ans==0)return -1;
        if(arr[n-1]!=0)ans++;
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends