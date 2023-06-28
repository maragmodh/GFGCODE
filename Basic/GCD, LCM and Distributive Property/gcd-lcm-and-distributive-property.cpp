//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
     long long GCD(long long a, long long b)
    {
        if(b==0)
            return a;
        return GCD(b,a%b);
    }
    long long LCM(long long a, long long b)
    {
        long long ans = (a*b)/GCD(a,b); 
        return ans;
    }
    long long findValue(int x, int y, int z) { 
        //complete the function here
        long long res1 = LCM(x,y);
        long long res2 = LCM(x,z);
        long long res  = GCD(res1,res2);
        return res;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        Solution ob;
        cout << ob.findValue(x, y, z) << endl;
    
    }
    return 0; 
} 

// } Driver Code Ends