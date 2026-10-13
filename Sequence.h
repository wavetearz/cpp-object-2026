#ifndef CPP_OBJECT_2026_SEQUENCE_H
#define CPP_OBJECT_2026_SEQUENCE_H

#include "Nucleotide.h"
#include <vector>

class Sequence {
public:
    std::vector<Nucleotide> strand;
    int A = 0;
    int T = 0;
    int C = 0;
    int G = 0;
    void printSequence();
    void loadSequence(char *path);
    char* getSequence();
};


#endif //CPP_OBJECT_2026_SEQUENCE_H