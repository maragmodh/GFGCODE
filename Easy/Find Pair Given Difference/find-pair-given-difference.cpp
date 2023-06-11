//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    // unordered_map<int,int>mp;
    // int f=-1;
    // for(int i=0;i<n;i++)
    //     mp[arr[i]]++;
    // for(int i=0;i<n;i++){
    //     int y = arr[i]+n;
    //     if(mp[y]){
    //         f=1;
    //         break;
    //     }
    // }
    // return f;
    sort(arr,arr+size);
    int i=0,j=0;
    while(j<=size){
        if(arr[j]-arr[i]==n && i!=j)
            return true;
        else if(arr[j]-arr[i]<n)
            j++;
        else 
            i++;
    }
    return false;
}