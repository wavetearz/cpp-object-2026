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
    vector<Nucleotide> n;
    n.emplace_back(0x0);
    n.emplace_back(0x1);
    n.emplace_back(0x2);
    n.emplace_back(0x3);
    s.loadSequence(n);
    s.printSequence();

    return 0;
}