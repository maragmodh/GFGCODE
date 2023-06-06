//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    //snode = source node
    vector<int>ans;
    bool solve(int snode,vector<int> &vis,vector<int>&ord,vector<int>g[]){
        vis[snode] = 1;
        ord[snode] = 1;
        for(auto it:g[snode]){
            if(!vis[it]){
                bool conf = solve(it,vis,ord,g);
                if(conf)
                    return true;
            }
            else if(ord[it])
                return true;    
        }
        ord[snode]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0);
        vector<int>ord(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bool c = solve(i,vis,ord,adj);
                if(c==true)
                    return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends