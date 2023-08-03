//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int find_height(int tree[], int n, int k)
    {
       sort(tree, tree+n);
    int s = 0, e = tree[n-1];
    while (s<=e){
        int mid = s+(e-s)/2;
        int wood = 0;
        for (int i = 0; i < n; i++) {
            if (tree[i]>mid)
                wood+=tree[i]-mid;
        }
        if (wood==k)
            return mid;

        if (wood>k)
            s = mid+1;
        else
            e = mid-1;
    }
    return -1;
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