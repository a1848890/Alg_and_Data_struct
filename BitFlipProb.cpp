#include "BitFlipProb.h"
#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <cstdlib>
#include "Individual.h"
#include "Mutator.h"

using namespace std;

BitFlipProb::BitFlipProb(){
    
}

BitFlipProb::BitFlipProb(double chance){
    p = chance;
    // cout << p << endl;
}

Individual* BitFlipProb::mutate(Individual* i, int k){
    int length = i->getLength();
    srand(time(NULL));
    for (k = 0; k < length; k++){
        double po = (double)(rand()%(100 + 1))/100.00;
        // cout << "po:" << po << endl;
        bool flag;
        if (p > po){
            // cout << "p:" << p << endl;
            // cout << "po:" << po << endl;
            flag = 1;
        }else{
            flag = 0;
        }
        
        //cout << flag << endl;
        if (flag){
            i->flipBit(k);
        }
        
    }
    return i;
}

BitFlipProb::~BitFlipProb(){

}