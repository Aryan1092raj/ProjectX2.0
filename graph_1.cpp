#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;
template <typename T>
class graph {
public:
        unordered_map<T,list<T>> adj;

        void addEdge(T u, T v , bool direction){
            //direction = 0 -> undirected
            //direction = 1 -> directed graph
            // create an edge from u to v
            adj[u].push_back(v);

            if(direction == 0){
                adj[v].push_back(u);
            }
        }

        void printAdjlist(){

            for(auto i : adj){
                cout << i.first << " -> ";
                for(auto j : i.second){
                    cout << j << ", ";
                }
                cout << endl;
            }
        }

};




int main(){
    int n ;
    cout << "Enter the number of nodes : ";
    cin >> n ;
    int m;
    cout << "Enter number of edges  : ";
    cin >> m;
    graph <int> g;
    for(int i = 0 ; i < m ; ++i){
        int u , v;
        cin >> u >> v;
        //cerating an undirected graph
        g.addEdge(u,v,0);
    }
    //printing graph
    g.printAdjlist();
}