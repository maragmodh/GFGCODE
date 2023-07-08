//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int>ans;
       stack<int>s;
       for(int i=0;i<n;i++){
           while(!s.empty() && price[s.top()]<=price[i])
               s.pop();// Remove the elements from the stack which are smaller than or equal to the current price
       
       if(s.empty())
           ans.push_back(i+1); // If the stack is empty, push the current index + 1 to the answer vector
       else 
           ans.push_back(i-s.top()); // Push the top element of the stack to the answer vector
       
       s.push(i); // Push the current index to the stack
    }
    return ans;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends