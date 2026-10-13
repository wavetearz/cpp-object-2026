#ifndef CPP_OBJECT_2026_NUCLEOTIDE_H
#define CPP_OBJECT_2026_NUCLEOTIDE_H

class Nucleotide {
public:
    short nucleotide;
    Nucleotide(short nucleotide);
    char nucleotideToCharacter();
    static short characterToNucleotide(char character);
};



#endif //CPP_OBJECT_2026_NUCLEOTIDE_H