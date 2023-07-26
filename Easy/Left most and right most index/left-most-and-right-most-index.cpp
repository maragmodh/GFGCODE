//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int BS(vector<long long> &arr, long long K, bool occurence)
    { 
        int N = arr.size();
        int s = 0, e = N-1;
        int indx = -1;
       while(s<=e){
           int mid = s + (e-s)/2;
            if(K == arr[mid]){
                indx = mid;
                if(occurence) e = mid-1;
                else s = mid + 1; 
            }
            else if(arr[mid] < K) 
                s = mid + 1;
            else 
                e = mid - 1;
       }
       return indx;
    }
    pair<long,long> indexes(vector<long long> v, long long x){
        int n = v.size();
        pair<long ,long> p;
        p.first = p.second = -1;
        p.first = BS(v, x, 1); // 1 denotes the first occur.
        p.second = BS(v, x, 0); // 0 denotes last occur.
        return p;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends