#include "Individual.h"
#include <iostream>
#include <string>

using namespace std;

Individual::Individual(int len){
    container = len;
    binaryString = "";
    for (int i=0; i<container; i++){
        binaryString = binaryString + '0';
    }
}


Individual::Individual(string binary){
    container = binary.size();
    //cout << container << endl;
    
    for (int i = 0; i < container; i++){
        copy[i] = binary[i];
    }
    binaryString = binary;
}

string Individual::getString(){
    return binaryString;
}

int Individual::getBit(int pos){
    if (pos > container){
        return -1;
    }

    if (binaryString.at(pos) == '1'){
        return 1;
    }

    return 0;
    
}

void Individual::flipBit(int pos){
    if (binaryString.at(pos) == '1'){
        binaryString.at(pos) = '0';
    }else if (binaryString.at(pos) == '0'){
        binaryString.at(pos) = '1';
    }

}

int Individual::getMaxOnes(){

    int counter = 0;
    int result = 0;
    
    for (int i = 0; i < container; i++){
        if (binaryString[i] == '1'){
            counter++;
            if (result < counter){
                result = counter;
            }
            
        }else if (binaryString[i] == '0'){
            counter = 0;
        }
    }
    
    return result;
}

int Individual::getLength(){
    return container;
}

void Individual::rearrangeBit(int pos){

    int count = 0;
    for (int i = 0; i < container; i++){
        if (i < container-pos){
            rebinaryString[i] = binaryString[pos+i];
            count++;
        }else{
            rebinaryString[i] = binaryString[i-count];
        }
    }

    for (int i = 0; i < container; i++){
        binaryString[i] = rebinaryString[i];
    }
    
    
}

Individual::~Individual(){

}