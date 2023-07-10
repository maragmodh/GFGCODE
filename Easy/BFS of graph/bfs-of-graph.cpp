//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void bfsRecursive(vector<int>& bfs, vector<bool>& visited, queue<int>& q, vector<int> adj[]) {
    if (q.empty())
        return;
    int node = q.front();
    q.pop();
    bfs.push_back(node);   // Add the current node to the BFS traversal order
    // Visit all unvisited neighbors of the current node
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            visited[neighbor] = true;
            q.push(neighbor);
        }
    }

    bfsRecursive(bfs, visited, q, adj);
}
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> bfs;              // To store the BFS traversal order
        vector<bool> visited(V, false);   // To keep track of visited nodes
        queue<int> q;                 // Queue for BFS traversal

    // Start BFS traversal from node 0
        visited[0] = true;
        q.push(0);
        bfsRecursive(bfs, visited, q, adj);
        return bfs;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends