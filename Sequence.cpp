#include "Sequence.h"
#include <iostream>

void Sequence::loadSequence(std::vector<Nucleotide> strand) {
    this->strand = strand;
}

void Sequence::printSequence() {
    for (int i = 0; i < strand.size(); i++) {
        std::cout << strand[i].nucleotideToCharacter();
    }
}