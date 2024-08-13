// Problem statement
// You are given an undirected graph of 'N' nodes and 'M' edges. Your task is to create the graph and print the adjacency list of the graph. 
// It is guaranteed that all the edges are unique, i.e., if there is an edge from 'X' to 'Y', then there is no edge present from 'Y' to 'X' and vice versa.
// Also, there are no self-loops present in the graph.

// In graph theory, an adjacency list is a collection of unordered lists used to represent a finite graph.
// Each list describes the set of neighbors of a vertex in the graph.


#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{

    public:
        unordered_map< int , list<int> > adj;

        void addEdge(int u , int v , bool direction){
            // direction = 0  -> undirected
            // direction = 1  -> directed

            // create an edge from u to v
            adj[u].push_back(v);

            if(direction == 0){
                adj[v].push_back(u);
            }
        }

        void printAdjList(){
            for(auto i:adj){
                cout << i.first << "-> ";
                for(auto j:i.second){
                    cout << j << ", ";
                }
                cout << endl;
            }
        }
};

int main(){

    int n;
    cout << "enter number of nodes : " << endl;
    cin >> n;
    
    int m;
    cout << "enter number of edges : " << endl;
    cin >> m;

    graph g;

    for(int i = 0; i<n; i++){
        int u ,v;
        cin>> u >> v;
        g.addEdge(u ,v ,0);
    }

    g.printAdjList();
    return 0;
}
