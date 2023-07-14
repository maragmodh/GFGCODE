//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	string FirstNonRepeating(string A){
	    map<char, int> mp;    // Map to store character frequencies
        string ans = "";      // String to store the answer
        queue<char> q;        // Queue to process characters in a FIFO manner

    for (int i = 0; i < A.length(); i++) {
        mp[A[i]]++;        // Increment the frequency of the current character
        q.push(A[i]);      // Push the current character into the queue
// Remove characters from the front of the queue until the front character has a frequency of 1
    while (!q.empty() && mp[q.front()] != 1)
        q.pop();       
// If the front character has a frequency of 1, it is unique, so add it to the answer
    if (!q.empty() && mp[q.front()] == 1)
        ans += q.front();   
    else // If there are no unique characters in the window, add '#' to the answer
        ans += '#';    
}

return ans; 
}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends