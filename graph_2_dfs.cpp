#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
#include <set>
#include <vector>
using namespace std;

void dfs(int node, unordered_map<int,bool> &visited, unordered_map<int,list<int>> &adj, vector<int> &component) {
    component.push_back(node);
    visited[node] = true;
    for (auto i : adj[node]) {
        if (!visited[i]) {
            dfs(i, visited, adj, component);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges) {
    // prepare adjList
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); ++i) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;
    unordered_map<int,bool> visited;

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            vector<int> component;
            dfs(i, visited, adj, component);
            ans.push_back(component);
        }
    }
    return ans; // <-- missing return
}

int main() {
    vector<vector<int>> edges = {
        {0,1}, {0,3}, {1,2}, {2,3}
    };

    int V = 4, E = edges.size();
    vector<vector<int>> result = depthFirstSearch(V, E, edges);

    cout << "DFS Traversal:\n";
    for (auto component : result) {
        for (int i : component)
            cout << i << " ";
        cout << endl;
    }
}
