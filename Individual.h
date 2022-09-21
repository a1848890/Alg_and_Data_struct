#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <iostream>
#include <string>

using namespace std;

class Individual{
private:
    string binaryString;
    int container;
    string copy;
    string rebinaryString;

public:
    Individual(int len);
    Individual(string binary);
    string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
    void rearrangeBit(int pos);
    ~Individual();
};
#endif

