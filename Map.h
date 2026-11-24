#ifndef CONWAY3_MAP_H
#define CONWAY3_MAP_H
#include "Cell.h"
#include <vector>


class Map {
    public:
        int xMap, yMap;
        int epoch = 0;
        std::vector <Cell> cells;
        Map(int xMap, int yMap);
        void printMap();
        void generateCells(int aliveChance);
        void nextEpoch();
        int getAliveCount();
        int getEpoch();
};


#endif