#include"Node.h"

Node :: Node() : _data(0){ _next = nullptr; }

int Node :: get_data(){
    return _data;
}

void Node :: set_data(int data){
    _data = data;
}

Node* Node :: get_node_pointer(){
    return _next;
}

void Node :: set_node_pointer(Node* node_pointer){
    _next = node_pointer;
}