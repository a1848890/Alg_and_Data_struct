#include <iostream>
#include <sstream>
#include <limits>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

bool isNum(string str){
    int len = str.length();
    for (int i = 0; i < len; i++){
        if (isdigit(str.at(i)) == false)
            return false;
    }
    return true;
}

int main(){

    int arr[100];
    int count = 0;
    int num, arg1, arg2;
    string str;
    while (true){
        cin >> str;
        if (isNum(str) == false){
            break;
        }
        stringstream(str) >> num;
        arr[count] = num;
        count++;
    }

    LinkedList *list = new LinkedList(arr, count);
    cin >> arg1;
    cin >> arg2;

    if (!str.compare("AF")){
        list->addFront(arg1);
    }
    else if (!str.compare("AE")){
        list->addEnd(arg1);
    }
    else if (!str.compare("AP")){
        list->addAtPosition(arg1, arg2);
    }
    else if (!str.compare("S")){
        list->search(arg1);
    }
    else if (!str.compare("DF")){
        list->deleteFront();
    }
    else if (!str.compare("DE")){
        list->deleteEnd();
    }
    else if (!str.compare("DP")){
        list->deletePosition(arg1);
    }
    else if (!str.compare("GI")){
        list->getItem(arg1);
    }
    list->printItems();

    return 0;
}