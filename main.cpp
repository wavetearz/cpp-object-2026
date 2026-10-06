#include <iostream>
#include "Sequence.h"
#include <vector>

using namespace std;

int main() {
    int arr[4] = {0, 1, 2, 3};
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << endl;
    }

    Sequence s;

    s.loadSequence("/Users/vjasieg/CLionProjects/cpp-object-2026/sequence.txt");
    s.printSequence();

    return 0;
}