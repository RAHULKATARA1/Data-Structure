#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph {
public:
    unordered_map<int, list<pair<int, int>>> adjList; // Corrected declaration

    void addEdge(int u, int v, int wt, bool direction) {
        // direction = 0 -> undirected
        // direction = 1 -> directed
        if (direction == 1) {
            // u->v
            adjList[u].push_back(make_pair(v, wt));
        } else {
            // undirected graph
            adjList[u].push_back(make_pair(v, wt));
            adjList[v].push_back(make_pair(u, wt)); // Corrected to add edge in both directions
        }
        printAdjList();
        cout << endl;
    }

    void printAdjList() {
        for (auto i : adjList) {
            cout << i.first << ": {";
            for (auto p : i.second) {
                cout << "{" << p.first << ", " << p.second << "}, ";
            }
            cout << "}" << endl; 
        }
    }
};

int main() {
    Graph g;
    g.addEdge(0, 1, 5, 1);
    g.addEdge(1, 2, 10, 1);
    g.addEdge(1, 3, 20, 1);
    g.addEdge(2, 3, 50, 1);
    g.addEdge(3, 0, 15, 0); 
    return 0;
}
