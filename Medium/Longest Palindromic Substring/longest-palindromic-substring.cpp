//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string S){
        int start=0,end=1;
        int n = S.length();
        for(int i=0;i<n;i++){
            int low=i-1,high=i;
            while(low>=0 && high<n && S[low] == S[high]){
                if(high-low+1>end){
                    end = high-low+1;
                    start = low;
                }
                low--;
                high++;
            }
        // for(int i=0;i<n;i++){
            low=i-1,high=i+1;
            while(low>=0 && high<n && S[low] == S[high]){
                if(high-low+1>end){
                    end = high-low+1;
                    start = low;
                }
                low--;
                high++;
            }
        }
        return S.substr(start,end);
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends