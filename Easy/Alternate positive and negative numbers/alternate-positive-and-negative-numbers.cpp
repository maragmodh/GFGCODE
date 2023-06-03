//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos;
	    vector<int>neg;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            neg.push_back(arr[i]);
	        }
	        else{
	            pos.push_back(arr[i]);
	        }
	    }     
	    int i=0,j=0,k=0;
	    int n1 = pos.size();
	    int n2 = neg.size();
	    while(i<n1 && j<n2){
	        arr[k++] = pos[i++];
	        arr[k++] = neg[j++];
	    }
	    while(i<n1)
	        arr[k++] = pos[i++];
	    while(j<n2)
	        arr[k++] = neg[j++];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends