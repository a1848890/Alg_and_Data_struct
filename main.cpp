#include<iostream>
#include<string>
#include"Rearrange.h"
#include"Individual.h"
#include"Mutator.h"
#include"BitFlip.h"
#include"BitFlipProb.h"
#include"Rearrange.h"

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k){
    Individual *after = mPtr->mutate(indPtr, k);
    return after;
}


int main(){
    string s1;
    cin >> s1;
    int k1;
    cin >> k1;

    string s2;
    cin >> s2;
    int k2;
    cin >> k2;

    Individual *individual1 = new Individual(s1);
    Individual *individual2 = new Individual(s2);

    Mutator * bitflipped = new BitFlip;
    Mutator * rearranged = new Rearrange;

    Individual *after1 = execute(individual1, bitflipped, k1);
    Individual *after2 = execute(individual2, rearranged, k2);

    cout << after1->getString() << " ";
    cout <<after2->getString() << " ";
    //cout << "s1 : " << s1 << endl;
    //cout << "s2 : " << s2 << endl;
    //cout << "individual1: string is " << individual1->getString() << endl;
    //cout << "individual2: string is " << individual2->getString() << endl;


    cout << after2->getMaxOnes() << endl;
    return 0;
}
