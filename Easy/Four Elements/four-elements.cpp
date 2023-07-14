//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

bool find4Numbers(int A[], int n, int X)  
{
    sort(A,A+n);
    for(int i=0;i<n;i++){
        int y=X-A[i];
        for(int j=i+1;j<n;j++)
        {
           int l=j+1,r=n-1;
           while(l<r){
           int sum=A[j]+A[l]+A[r];
           if(sum==y) return true;
           else if(sum>y) r--;
           else l++;
           }
        }
    }
 return false;
}