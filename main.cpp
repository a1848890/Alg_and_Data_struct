#include <iostream>
#include <string>
#include "Individual.h"
#include "BitFlip.h"
#include "Mutator.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

using namespace std;

Individual* execute(Individual* indPtr, Mutator* mPtr, int k){
    Individual* result = mPtr->mutate(indPtr, k);
    return result;
}

int main(){

    string binarystr1;
    string binarystr2;
    int k1;
    int k2;

    cin >> binarystr1;
    cin >> k1;
    cin >> binarystr2;
    cin >> k2;

    //cout << "check" << endl;

    Individual* Individual1 = new Individual(binarystr1);
    Mutator* mutator1 = new BitFlip();
    Individual* Individual2 = execute(Individual1, mutator1, k1);
    
    Individual* Individual3 = new Individual(binarystr2);
    Mutator* mutator2 = new Rearrange();
    Individual* Individual4 = execute(Individual3, mutator2, k2);

    string mutatedString = Individual2->getString();

    int length = Individual2->getLength();
    for (int i = 0; i < length; i++){
        cout << mutatedString.at(i);
    }
    cout << " ";

    string reString = Individual4->getString();
    int maxNum = Individual4->getMaxOnes();

    int length2 = Individual4->getLength();
    for (int i = 0; i < length2; i++){
        cout << reString.at(i);
    }
    cout << " ";
    
    cout << maxNum << endl;

    return 0;
}