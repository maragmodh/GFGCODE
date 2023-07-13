//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

//User function template for C++

class Solution {
  public:
    vector<vector<int>>ans;
    void helper(vector<int>&temp,vector<int> &A, int B,int i,int currsum){
        if(currsum>B)
            return;
        if(i==A.size()){
            if(currsum==B){
                sort(temp.begin(),temp.end());
                ans.push_back(temp);
            }
            return;
        }
            
        //inclusion
        currsum +=A[i];
        temp.push_back(A[i]);
        helper(temp,A,B,i,currsum);
        currsum-=A[i];
        temp.pop_back();
        //exclusion
        helper(temp,A,B,i+1,currsum);
        
    }
    vector<vector<int>>combinationSum(vector<int> &A, int B) {
        // Your code here
        
        vector<int>temp;
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(),A.end()),A.end());
        helper(temp,A,B,0,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends