#ifndef CPP_OBJECT_2026_SEQUENCE_H
#define CPP_OBJECT_2026_SEQUENCE_H

#include "Nucleotide.h"
#include <vector>

class Sequence {
public:
    std::vector<Nucleotide> strand;
    void printSequence();
    void loadSequence(std::vector<Nucleotide> strand);
};


#endif //CPP_OBJECT_2026_SEQUENCE_H