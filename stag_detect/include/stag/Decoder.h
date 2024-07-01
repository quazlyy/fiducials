#ifndef DECODER_H
#define DECODER_H

#include <bitset>
#include <vector>
#include "stag/MarkerIDs.h"

using std::bitset;
using std::vector;

typedef bitset<48> Codeword;

class Decoder {
    int wordSize = 48;
    int noOfCodewords;

    vector<Codeword> codewords;

public:
    Decoder() {}
    Decoder(int hd);
    bool decode(const Codeword& c, int errCorr, int& id, int& shift);
};

#endif
