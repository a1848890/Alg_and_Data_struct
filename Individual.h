#pragma once
#include<string>

using std::string;


class Individual{
    private:
        string _binary_string;
        int _length;
    public:
        Individual();
        Individual(string binary_string);
        Individual(int length);

        string getString();
        int getBit(int pos);
        int getLength();
        int getMaxOnes();
        void flipBit(int pos);
        ~Individual();
};


