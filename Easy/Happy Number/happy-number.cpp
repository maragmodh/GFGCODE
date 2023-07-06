//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isHappy(int n){
        // code here
        if(n==1 || n == 7)   return 1;
        if(n== 2 || n==3 || n==4 || n==5 ||n==6 || n ==8 || n==9)   return 0;
        int sum = 0;
        while(n>0){
            int x = n%10;
            sum = sum + x*x;
            n = n/10;
        }
        return isHappy(sum);
    
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends