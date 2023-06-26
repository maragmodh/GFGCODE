//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
//   int ans(int l,int a[],int n)
//     {
//         for(int i=0;i<n;i++)
//         {
//             if(a[i] == l)
//               return i;
//         }
//         return -1;
//     }
    int minDist(int a[], int n, int x, int y) {
        // code here
        //  int ans1 = -1;
        // int ans2 = -1;
        // int dist = INT_MAX;
        // ans1 = ans(x,a,n);
        // ans2 = ans(y,a,n);        
        // if(ans1!=-1 && ans2!=-1){
        //      dist = min(abs(ans1 - ans2), dist);
        //      return dist;
        // }
        // else
        //     return -1;
        int x_index = -1;
        int y_index = -1;
        int mini = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == x)
                x_index = i;
            if(a[i] == y)
                y_index = i;
                
            if(x_index != -1 && y_index != -1)
                if(abs(x_index-y_index) < mini)
                    mini = abs(x_index-y_index);
        }
        if(mini == INT_MAX)
            return -1;
        return mini;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends