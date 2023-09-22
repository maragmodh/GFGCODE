//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int nums[], int n , int x )
    {
         vector<int> answer;
    int lowerBound = lower_bound(nums, nums + n, x) - nums;
    int upperBound = upper_bound(nums, nums + n, x) - nums;
    answer.push_back(lowerBound);
    if(lowerBound != upperBound){
        answer.push_back(upperBound - 1);
        return answer;
    }
    return {-1, -1};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends