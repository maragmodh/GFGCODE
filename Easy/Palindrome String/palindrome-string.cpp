//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
// 	time complexity -O(n) | space complexity O(1)
	string reverse(string s,int start ,int end)
{
   while(start<=end)
   {
       swap(s[start],s[end]);
       start++;
       end--;
   }
   return s;
}
int isPalindrome(string s)
{
   // Your code goes here
        if((reverse(s,0,s.length()-1))==s)
            return 1;
        return 0;
}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends