#include"Individual.h"
#include<string>
using std::string;

Individual :: Individual(){}


Individual :: Individual(int length){
    _length = length;
    _binary_string = "";
    char char_zero = '0';
    for (int i=0; i<length; i++){
        _binary_string = _binary_string + char_zero;
    }
}

Individual :: Individual(string binary_string){
    _length = binary_string.length();
    _binary_string = binary_string;
}


string Individual :: getString(){
    return _binary_string;
}


int Individual :: getBit(int pos){
    if (pos < 0 || pos >= _length) return -1;
    return (int)_binary_string[pos] - 48;
}


int Individual :: getLength(){
    return _length;
}


void Individual :: flipBit(int pos){
    if ( (_binary_string[pos] - 48) == 1) _binary_string[pos] = '0';
    else if ( (_binary_string[pos] - 48) == 0) _binary_string[pos] = '1';
    else{}   
}

/*
int Individual::getMaxOnes(){
    int count = 0;
    int string_index = 0;
    int inner_index = 0;
    int temp = 0;

    for (string_index=0; string_index<_length; string_index++){
        
        if (_binary_string[string_index] == '1') { // if found '1'
            inner_index = string_index; // pass the string_index to the inner index
            while (_binary_string[inner_index] == '1'){
                inner_index++;
                count++;
            }
    
        if (temp < count) temp = count;
        count = 0;
        }
    }
    return temp;

}

*/
int Individual :: getMaxOnes(){
    int j = 0;
    int count = 0;
    int maximum = 0;

    for (int i=0; i<_length; i++){
        if (_binary_string[i] == '1'){
            j=i;
            while (_binary_string[j] == '1'){
                count ++;
                j++;
            }
        }
    if (maximum < count) maximum = count;
    
    count = 0;
    }
    return maximum;
}


Individual :: ~Individual(){}
