#include <iostream>
#include <chrono>
#include <thread>
#include "Map.h"

using namespace std;

void clear();

void clear() {
    system("clear"); // only on macOS
}

int main() {
    Map m(15, 40);
    m.generateCells(8); // 1/8 cells alive
    while (true) {
        cout << "EPOCH: " << m.getEpoch() << endl;
        m.printMap();
        m.nextEpoch();
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        clear();
        if (m.getAliveCount() == 0) {
            cout << "nie zyja" << endl;
            break;
        }
    }
}
