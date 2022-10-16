/*
The class Node should consist of two member variables, an integer data and a pointer 
to Node next, and 5 functions, a constructor, and getter and setter for the two
member variables.
*/

#pragma once
class Node{
    private:
        int _data;
        Node* _next;
    public:

        Node();
        int get_data();
        void set_data(int data);
        Node* get_node_pointer();
        void set_node_pointer(Node* node_pointer);
};
