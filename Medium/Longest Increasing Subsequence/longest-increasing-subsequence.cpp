//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        vector<int>temp;
        for (int i = 0; i < n; i++) {
        // Find the index where 'a[i]' could be inserted while maintaining sorted order
        int ind = lower_bound(temp.begin(), temp.end(), a[i]) - temp.begin();
        if(ind >= temp.size())
            // If 'a[i]' is greater than all elements in 'temp', add it to the end
            temp.push_back(a[i]);
        else
            // Replace the element at 'ind' with 'a[i]'
            temp[ind] = a[i];
    }
       return temp.size();
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends