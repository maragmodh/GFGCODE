//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int calwood(vector<int>tree,int n,int val){
        int cnt=0;
        for(int i=0;i<n;i++)
            tree[i]=tree[i]-val;
        for(int i=0;i<n;i++){
            if(tree[i]>=0){
                cnt+=tree[i];
            }
        }
        return cnt;
    }
    int find_height(int tree[], int n, int k)
    {
        // code here
        int ans=-1;
        int s=0;
        int e=0;
        for(int i=0;i<n;i++)
            e=max(e,tree[i]);
        vector<int>v;
        for(int i=0;i<n;i++)
            v.push_back(tree[i]);
        while(s<=e){
            int mid=s+(e-s)/2;
            int totalwood=calwood(v,n,mid);
            if(totalwood==k){
                ans=mid;
                break;
            }
            else if(totalwood<k)
                e=mid-1;
            else
                s=mid+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}
// } Driver Code Ends