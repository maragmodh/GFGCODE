//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string sum="";
  int count =1;
  for(int i=0;i<src.length();i++){
      if(src[i]==src[i+1])
        count++;
      else{
        sum += src[i] + to_string(count);
        count=1;
      }
  }
  return sum;
}     
 
