#ifndef ALGORITHMS_EX1_NEIGHBOR_H
#define ALGORITHMS_EX1_NEIGHBOR_H


class Neighbor {

private:
    int vertexNumber;
    bool isMarked;
    Neighbor* mutualVertex;

public:
    Neighbor(int vertexNumber);
    ~Neighbor() = default;
    int getVertexNumber() const;
    bool getIsMarked() const;
    void setIsMarked(bool isMarked);
};


#endif //ALGORITHMS_EX1_NEIGHBOR_H
