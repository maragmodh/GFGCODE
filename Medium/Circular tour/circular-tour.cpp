//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
        int ans=0; // Store the starting petrol pump index
        int sum = 0;    // Store the current petrol balance
         // Traverse the petrol pumps in a circular manner
        for(int i=0;i<n;i++){
            if(p[i].distance>sum+p[i].petrol){
// If the distance to the next petrol pump is greater than the current petrol balance,
// update the starting petrol pump index and reset the petrol balance
                sum=0;
                ans=i+1;
            }
            else
//If the distance can be covered with the current petrol balance, subtract the distance
// from the petrol balance and add the petrol available at the current pump
                sum+=p[i].petrol-p[i].distance;
        }
// Complete the circular traversal to check if it is possible to cover the entire tour
        for(int i=0;i<ans;i++)
// Add the petrol available at each pump and subtract the distance to the next pump
            sum+=p[i].petrol-p[i].distance;
// If the final petrol balance is non-negative, it is possible to complete the tour
        if(sum>=0)
            return ans;
        return -1;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends