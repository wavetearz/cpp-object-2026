#ifndef CONWAY3_CELL_H
#define CONWAY3_CELL_H
#include <vector>

class Cell {
public:
    Cell(int initX, int initY, int mapSizeX, int mapSizeY);
    int x;
    int y;
    int mapSizeX;
    int mapSizeY;
    bool isAlive;
    void printCell();
    void kill();
    std::vector<std::pair<int, int>> getNeighbourCoordinates();
};

#endif