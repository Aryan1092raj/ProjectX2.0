#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
using namespace std;

//For connected graph
vector <int> bfs(vector <vector<int>> &adj){
    int v = adj.size();
    vector <bool> visited(v,false);
    vector <int> bfs;

    queue <int> q;

    int src = 0 ;
    visited[src] = true;
    q.push(src);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        bfs.push_back(curr);

        // visit all neighbours of current node
        for(int x : adj[curr]){ 
            if(!visited[x]){
                visited[x] = true;
                q.push(x);
            }
        }
        
    }
    return bfs;
}
int main(){
    vector <vector<int>> adj(5);
        vector <vector<int>> edges ={{0,1},{0,2},{1,2},{1,3},{2,4},{3,4}};
        for(auto &e : edges){
            int u = e[0];
            int v = e[1];
            
        }
}