#include "Map.h"
#include "Cell.h"
#include <vector>
#include <iostream>

using namespace std;

enum class MapSymbol : char {
    ALIVE = '#',
    DEAD = ' ',
    CLEAR = ' '
};

Map::Map(int x, int y) {
    this->xMap = x;
    this->yMap = y;
}

void Map::generateCells(int aliveChance) {
    static bool seeded = false;
    if (!seeded) {
        srand(static_cast<unsigned int>(time(nullptr)));
        seeded = true;
    }

    // zapelnienie planszy
    for (int x = 1; x <= xMap; x++) {
        for (int y = 1; y <= yMap; y++) {
            Cell c(x, y, xMap, yMap);
            c.kill();
            c.isAlive = (rand() % aliveChance == 1);
            this->cells.push_back(c);
        }
    }


}

void Map::printMap() {
    for (int x = 1; x <= xMap; x++) {
        for (int y = 1; y <= yMap; y++) {
            bool cellFound = false;

            for (size_t i = 0; i < cells.size(); i++) {
                if (x == cells.at(i).x && y == cells.at(i).y) {
                    if (cells.at(i).isAlive) {
                        std::cout << static_cast<char>(MapSymbol::ALIVE) << std::flush;
                    } else {
                        std::cout << static_cast<char>(MapSymbol::DEAD) << std::flush;
                    }
                    cellFound = true;
                    break;
                }
            }

            if (!cellFound) {
                std::cout << static_cast<char>(MapSymbol::CLEAR) << std::flush;
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::flush;
}

void Map::nextEpoch() {
    vector <Cell> oldCells = cells; // stan z poprzedniej epoki

    for (size_t i = 0; i < cells.size(); i++) {
        auto neighborCoords = oldCells.at(i).getNeighbourCoordinates();
        int liveCount = 0;

        for (const auto& coord : neighborCoords) {
            for (const auto& c : oldCells) {
                if (c.x == coord.first && c.y == coord.second && c.isAlive) {
                    liveCount++;
                    break;
                }
            }
        }

        if (liveCount < 2) {
            cells.at(i).kill();
        } else if (liveCount == 3 && !cells.at(i).isAlive) {
            cells.at(i).isAlive = true;
        } else if (liveCount > 3) {
            cells.at(i).kill();
        }
    }
    epoch++;
}

int Map::getAliveCount() {
    int aliveCount = 0;
    for (size_t i = 0; i < cells.size(); i++) {
        if (cells.at(i).isAlive) {
            aliveCount++;
        }
    }
    return aliveCount;
}

int Map::getEpoch() {
    return epoch;
}