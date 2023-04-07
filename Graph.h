#ifndef ALGORITHMS_EX1_GRAPH_H
#define ALGORITHMS_EX1_GRAPH_H

#include <vector>
#include "Vertex.h"


class Graph {

private:
    bool isDirected;
    std::vector<Vertex> vertices;
    bool isEulerian;

public:
    Graph(bool isDirected, int numOfVertices, int numOfEdges, std::vector<std::pair<int, int>> edges);





};


#endif //ALGORITHMS_EX1_GRAPH_H
