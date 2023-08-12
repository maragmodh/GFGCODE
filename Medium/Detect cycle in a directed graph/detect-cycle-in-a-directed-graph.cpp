//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    //snode = source node
    //we use dfs
    vector<int>ans;
    bool solve(int snode,vector<int> &vis,vector<int>&ord,vector<int>g[]){
        vis[snode] = 1;// Mark the current node as visited
        ord[snode] = 1;// Mark the current node as part of the current DFS path

        for(auto it:g[snode]){
            if(!vis[it]){
                bool conf = solve(it,vis,ord,g); // Recursively call solve on unvisited adjacent nodes
                if(conf)
                    return true; //If a cycle is detected, return true
            }
            else if(ord[it])
                return true;// If an adjacent node is already part of the current DFS path, a cycle is detected  
        }
        ord[snode]=0;// Mark the current node as not part of the current DFS path
        return false;     // No cycle detected in the current DFS path
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0); //Array to track visited nodes
        vector<int>ord(V,0); //Array to track nodes in the current DFS path
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bool c = solve(i,vis,ord,adj);  // Call solve function on the current unvisited node
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