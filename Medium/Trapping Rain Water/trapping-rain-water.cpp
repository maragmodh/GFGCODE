//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int l[n],r[n];
        int ml = l[0] = arr[0];     //max from left
        int mr = r[n-1] = arr[n-1];
        for(int i=1;i<n;i++){
            if(arr[i]>ml)
                ml = arr[i];
                
            l[i] = ml;
        }
        for(int i=n-2;i>=0;i--){
            if(arr[i]>mr)
                mr = arr[i];
                
            r[i] = mr;
        }
        long long s=0;
        for(int i=0;i<n;i++)
            s += min(l[i],r[i]) - arr[i];
            
        return s;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends