//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        // sort(arr,arr+n);
        // long long sum = arr[0] + arr[1];
        // long long sum2;
        // for(int i=2;i<n;i++)
        //     sum2 = sum + arr[i];
        // return sum2;
        if(n==1)
            return 0;
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(int i=0;i<n;i++)    pq.push(arr[i]);
        long long ans=0;
        while(pq.size()>1){
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
            pq.push(x+y);
            ans += x+y;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends