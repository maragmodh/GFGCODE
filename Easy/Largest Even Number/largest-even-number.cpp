//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string LargestEven(string str){
        //complete the function here
         sort(str.begin(),str.end());
         reverse(str.begin(),str.end());
         int len=str.length();
         for(int i=len-1;i>=0;i--)
         {
             if(str[i]%2==0)
             {
                 swap(str[i],str[len-1]);
                 break;
             }
         }
         sort(str.begin(),str.end()-1,greater<int>());
         return str;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.LargestEven(s) << "\n";
    }
return 0;
}


// } Driver Code Ends