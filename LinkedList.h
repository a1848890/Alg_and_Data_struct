/*
• The class LinkedList must have only one member variable: head, which is of type
pointer to Node.

• If the list is empty, head should contain NULL or nullptr.

• It should also have at least the following member functions. Note that add
 functions should construct nodes from the heap, and delete functions should 
 manually delete the one that is removed from the list. 
 
*** Don’t forget to write test cases for each function and ensure that the tests pass 
 before progressing to the next function. *****/



#pragma once
#include"Node.h"
#include<iostream>
class LinkedList{
    private: 
        Node* head;
    public:
        LinkedList();
        LinkedList(int arr[], int n);
        void addFront(int newItem);
        void addEnd(int newItem);
        void addAtPosition(int position, int newItem);
        int search(int item);
        void deleteFront();
        void deleteEnd();
        void deletePosition(int position);
        int getItem(int position);
        void printItems();
        ~LinkedList();
};
