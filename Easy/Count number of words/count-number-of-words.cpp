//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int countWords(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<countWords(s)<<endl;
	    }
}
// } Driver Code Ends


//User function Template for C++

int countWords(string s)
{
    int  n = s.length();
    int temp=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
         if((s[i] == '\\' && s[i+1] == 'n')||(s[i] == '\\' && s[i+1] == 't'))
         {
             temp = 0;
             i++;             
         }
         else if (s[i] == ' ')
             temp = 0;
        
         else if(temp==0  )
         {
             c++;
             temp = 1;
         }
    }
    return c;
}