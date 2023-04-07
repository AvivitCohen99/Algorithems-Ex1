#include "Graph.h"
using namespace std;

Graph::Graph(bool isDirected, int numOfVertices, int numOfEdges, vector<pair<int, int>> edges) {
    this->isDirected = isDirected;
    this->isEulerian = false;

    for (int i = 0; i < numOfVertices; i++) {
        this->vertices.push_back(Vertex(i+1));
    }

    for (int i = 0; i < numOfEdges; i++) {
        this->vertices[edges[i].first].addEdge(edges[i].second);
        if (isDirected){
            this->vertices[edges[i].second].addEdge(edges[i].first);
            // TODO: add mutual vertex!!!
        }
    }
}
