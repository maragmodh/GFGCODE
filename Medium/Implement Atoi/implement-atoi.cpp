//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        // bool sign = (str[0]=='-');
        // int i;
        // if(sign)
        //     int i=1;
        // else 
        //     int i=0;
            
        // for(i;i<str.length();i++)
        //     if(!isdigit(str[i]))
        //         return -1;
        // int num=0;
        // for(int i=0;i<str.length();i++){
        //     if(str[i]>='0' && str[i]<='9'){
        //         num *= 10;
        //         num += (str[i]-'0');
        //     }
        // }
        // if(sign)
        //     num *= -1;
        // return num;
        int count=0;
        for(int i=0;i<str.length();i++)
            if(str[i]>='0' && str[i]<='9')
                count++;
                
        if(count==str.size() || (count == str.size()-1 && str[0]=='-'))
            return stoi(str);
        
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
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends