#include "Nucleotide.h"

Nucleotide::Nucleotide(short nucleotide) {
    this->nucleotide = nucleotide;
}

char Nucleotide::nucleotideToCharacter() {
    switch (nucleotide) {
        case 0x0:
            return 'A';
        case 0x1:
            return 'T';
        case 0x2:
            return 'C';
        case 0x3:
            return 'G';
        default:
            return 'X';
    }
}

short Nucleotide::characterToNucleotide(char character) {
    switch (character) {
        case 'A':
            return 0x0;
        case 'T':
            return 0x1;
        case 'C':
            return 0x2;
        case 'G':
            return 0x3;
        default:
            return 0x0;
    }
}