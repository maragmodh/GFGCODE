//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int n, int k)
    {
        // Write Your Code here
        vector<int>ans;
        // if(k==0){
        //     ans.push_back(55);
        //     ans.push_back(55);
        //     return ans;
        // }
        sort(candies,candies+n);
        int mini = 0;
        int free1 = n-1;
        int buy = 0;
        while(buy<=free1){
            mini = mini + candies[buy];
            buy++;
            free1 = free1-k;
        }
        int maxi=0;
        int free2=0;
        int buy2 = n-1;
        while(free2<=buy2){
            maxi = maxi + candies[buy2];
            buy2--;
            free2 = free2+ k;
        }
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
            
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends