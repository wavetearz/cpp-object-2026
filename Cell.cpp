#include "Cell.h"
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

Cell::Cell(int initX, int initY, int mapSizeX, int mapSizeY) {
    if (initX >= 1 && initX <= mapSizeX && initY >= 1 && initY <= mapSizeY) {
        this->x = initX;
        this->y = initY;
        this->mapSizeX = mapSizeX;
        this->mapSizeY = mapSizeY;
    } else {
        //std::cout << "out of scope" << std::endl;
    }
    this->isAlive = true;
}

std::vector<std::pair<int, int>> Cell::getNeighbourCoordinates() {
    std::vector<std::pair<int, int>> neighbors;

    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            if (dx == 0 && dy == 0) {
                continue;
            }
            int neighborX = this->x + dx;
            int neighborY = this->y + dy;
            if (neighborX >= 1 && neighborX <= mapSizeX && neighborY >= 1 && neighborY <= mapSizeY) {
                neighbors.push_back({neighborX, neighborY});
            }
        }
    }
    return neighbors;
}

void Cell::kill() {
    this->isAlive = false;
}