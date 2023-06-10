//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int>temp;
        int sum=0;
        int maxlen=0;
        int k=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+A[i];
            if(sum==k)
            maxlen=i+1;
            
            if(temp.find(sum)==temp.end())
            temp[sum]=i;
            if(temp.find(sum-k) !=temp.end())
            maxlen=max(maxlen,i-temp[sum-k]);
        }
        return maxlen;
    }
    
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends