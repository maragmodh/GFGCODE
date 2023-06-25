//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here              // 1 5 5 5
                                        // 5 5 4 3
    // unordered_map<int,int>mp;
    int start=0;
    int end = len-1;
    int currarea,maxarea=0;
    while(start<end){
        currarea = min(A[start],A[end]) * (end-start);
        if(currarea>maxarea)
            maxarea = currarea;
        if(min(A[start],A[end])==A[start])
            start++;
        else
            end--;
    }
    return maxarea;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends