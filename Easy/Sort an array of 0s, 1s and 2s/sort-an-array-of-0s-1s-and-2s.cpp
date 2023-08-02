//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
       int i,cnt0=0,cnt1=0,cnt2=0;
        for(i=0;i<n;i++){
            if(arr[i]==0)
                cnt0++;
            else if(arr[i]==1)
                cnt1++;
            else if(arr[i]==2)
                cnt2++;
        }
        int j=0,a=0,b=0,c=0;
        for(int a=cnt0;a>0;a--,j++)
          arr[j]=0;
        for(int b=cnt1;b>0;b--,j++)
          arr[j]=1;
        for(int c=cnt2;c>0;c--,j++)
          arr[j]=2;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends