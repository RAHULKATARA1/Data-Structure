#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph{
    public:
   unordered_map<int, list<int> > adjList;
    void addEdge(int u, int v, bool direction){
        // direction -> 0 -> undirected graph
        // direction -> 1 -> directed graph
        if(direction == 1){
            // u se v ki taraf ek edge hai
            adjList[u].push_back(v);
        }
        else{
            // direction = 0
            // u -- v
            // u -> v
            adjList[u].push_back(v);
            // v -> u
            adjList[v].push_back(u);
        }
        cout<<endl<<"printing adjList"<<endl;
        printadjList();
        cout<<endl;
    }
  
};
int main(){
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(1,3,1);
    g.addEdge(2,3,1);
    return 0;
}