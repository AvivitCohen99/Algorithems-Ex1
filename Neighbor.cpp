#include "Neighbor.h"

Neighbor::Neighbor(int vertexNumber) {
    VertexNumber = vertexNumber;
    IsMarked = false;
}

int Neighbor::getVertexNumber() const {
    return VertexNumber;
}

bool Neighbor::getIsMarked() const {
    return IsMarked;
}

void Neighbor::setIsMarked(bool isMarked) {
    IsMarked = isMarked;
}