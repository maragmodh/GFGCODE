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
       //Your code here
       int start =0;
       int balance =0 ; //jo tel bach gya hai
       int deficiet = 0; // poora tour marne me kitna kmpdega mtlb ki agr distance jyada 
        // aur given petrol km hoto utna exttra petrol require hoga n ... to wo poora ho payega ki nhi
       for(int i=0;i<n;i++){
           balance += p[i].petrol - p[i].distance;
           if(balance<0){
               deficiet+=balance;
               start = i+1;
               balance =0;
           }
       }
       if(balance + deficiet >0){
           return start;
       }
       else
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