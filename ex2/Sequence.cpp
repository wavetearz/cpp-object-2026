#include "Sequence.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Nucleotide.h"

using namespace std;

void Sequence::loadSequence(char *path) {
    vector<Nucleotide> strand;
    fstream file(path);
    string seq;
    getline(file, seq);

    strand.reserve(seq.length());
    for (int i = 0; i < seq.length(); i++) {
        strand.emplace_back(Nucleotide::characterToNucleotide(seq[i]));
        switch (seq[i]) {
            case 'A':
                this->A++;
                break;
            case 'T':
                this->T++;
                break;
            case 'C':
                this->C++;
                break;
            case 'G':
                this->G++;
                break;
        }
    }

    this->strand = strand;
}

char* Sequence::getSequence() {
    char *seq = new char[strand.size()];
    for (int i = 0; i < strand.size(); i++) {
        cout << strand[i].nucleotideToCharacter();
    }
    return seq;
}

void Sequence::printSequence() {
    for (int i = 0; i < strand.size(); i++) {
        cout << strand[i].nucleotideToCharacter();
    }
}