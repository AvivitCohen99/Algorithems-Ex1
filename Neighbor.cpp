#include "Neighbor.h"

Neighbor::Neighbor(int vertexNumber) {
    this->vertexNumber = vertexNumber;
    this->isMarked = false;
}

int Neighbor::getVertexNumber() const {
    return vertexNumber;
}

bool Neighbor::getIsMarked() const {
    return this->isMarked;
}

void Neighbor::setIsMarked(bool isMarked) {
    this->isMarked = isMarked;
}
