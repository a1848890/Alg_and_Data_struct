#include"Node.h"
#include"LinkedList.h"

#include<iostream>
#include<limits>
using std::cout;
using std::endl;

LinkedList :: LinkedList(){ head = nullptr; }

LinkedList :: LinkedList(int arr[], int n){
    head = new Node();
    head->set_data(arr[0]); // put the first element of the array in Node0

    Node* traverse_pointer = head;
    for (int i=1; i<n; i++){
    
        int temp_data = arr[i]; // traverse the data
        
        // pack the data into nodes, we have n datas
        Node* new_node_pointer = new Node();
        new_node_pointer->set_data(temp_data);
        new_node_pointer->set_node_pointer(nullptr);
        
        // contect the node with the linklist
        traverse_pointer -> set_node_pointer(new_node_pointer);
        
        /* test */
        // std :: cout << traverse_pointer->get_data() << std::endl;
        // std :: cout << traverse_pointer->get_node_pointer() << std::endl;        
        
        // increament the traverse pointer by one
        traverse_pointer = traverse_pointer->get_node_pointer();

        /* test */
        // std :: cout << traverse_pointer->get_node_pointer() << std::endl;        
    }
    /* test */ 
    // std::cout << traverse_pointer->get_node_pointer()->get_data() << std::endl;
}


void LinkedList :: addFront(int newItem){
    // pack the newItem into a Node
    Node* new_node_pointer = new Node();
    new_node_pointer -> set_data(newItem);
    new_node_pointer -> set_node_pointer(nullptr);

    Node* second_pointer = head;
    head = new_node_pointer;
    head -> set_node_pointer(second_pointer);
    
    /* test */
    //cout << "After change, head's data: " << head->get_data() << endl;
    //cout << "After change, second node's data: " << head -> get_node_pointer() -> get_node_pointer()->get_data();
}

void LinkedList :: addEnd(int newItem){
    
    Node* traverse_pointer = new Node();
    traverse_pointer = head;
    //cout << traverse_pointer -> get_data() << endl;
    // traverse the traversal_pointer to the last element of the list    
    while (true){
        if (traverse_pointer->get_node_pointer() == nullptr) break;
        traverse_pointer = traverse_pointer->get_node_pointer();
        //cout << traverse_pointer->get_data() << endl;
    }
    

    // pack the new item into a node
    Node* new_node_pointer = new Node();
    new_node_pointer -> set_data(newItem);
    new_node_pointer -> set_node_pointer(nullptr);

    // trav_ptr ---> [data|nullptr]  -   -   [new_data|nullptr]
    traverse_pointer->set_node_pointer(new_node_pointer);
    //cout << traverse_pointer->get_node_pointer() << endl;
    //cout << new_node_pointer << endl;
    //cout << new_node_pointer->get_data() << endl;
    //cout << traverse_pointer->get_node_pointer()->get_data() << endl;
}

void LinkedList :: addAtPosition(int position, int newItem){
    Node* traverse_pointer = new Node();
    traverse_pointer = head;

    // head->[Data|next] --> [Data|next] - - - -  -->[Data|nullptr]
    int count = 1;
    while (true){
        count++;
        if (traverse_pointer->get_node_pointer() == nullptr) break;
        traverse_pointer = traverse_pointer->get_node_pointer();
        // cout << "travese_pointer_data: " << traverse_pointer->get_data() << endl;
        // cout << "count               : " << count << endl;
    }

    if (position > count) addEnd(newItem);
    else {
        //pack the new Item into a node
        Node* new_item_node = new Node();
        new_item_node->set_data(newItem);
        new_item_node->set_node_pointer(nullptr); // initialize the pointer to null first

        Node* traverse_pointer1 = new Node();
        traverse_pointer1 = head;
        int i = 2;
        
        while (i<position) { 
            traverse_pointer1 = traverse_pointer1->get_node_pointer();
            i++; 
        }

        // after the while loop, traverse_pointer1 points to the (position-1)th element

        Node* temp_pointer = new Node();
        temp_pointer = traverse_pointer1->get_node_pointer();

        traverse_pointer1->set_node_pointer(new_item_node);
        new_item_node->set_node_pointer(temp_pointer);

    }

/*
        Node* test_pointer = new Node();
        test_pointer = head;
        for (int i=0; i<count; i++){
            cout << test_pointer->get_data() << " ";
            test_pointer = test_pointer->get_node_pointer();
        }
        cout << endl;
*/
}


int LinkedList::search(int item){
    Node* traverse_pointer = new Node();
    traverse_pointer = head;
    int index = 1;
    while (traverse_pointer != nullptr){
        if (traverse_pointer->get_data() == item){
            cout << index << " ";
            return index;
        }
        traverse_pointer = traverse_pointer->get_node_pointer();
        index++;
    }
    cout << "0 ";
    return 0;
}

void LinkedList :: deleteFront(){
    Node* traverse_pointer = new Node();
    traverse_pointer = head;
    traverse_pointer = traverse_pointer->get_node_pointer();
    head = nullptr;
    head = traverse_pointer;

    /* test */
    // cout << head->get_data() << endl;

}

// [Node1]--->[Node2]--->[Node3]--->[Noden]
void LinkedList :: deleteEnd(){
    Node* traverse_pointer = new Node();
    traverse_pointer = head;
    
    while (traverse_pointer->get_node_pointer()->get_node_pointer() != nullptr) 
        traverse_pointer = traverse_pointer->get_node_pointer();
    // Disconnect the last element with the linkedlist
    traverse_pointer->set_node_pointer(nullptr);

}

void LinkedList :: deletePosition(int position){
    Node* counter_pointer = new Node();
    counter_pointer = head;

    // head->[Data|next] --> [Data|next] - - - -  -->[Data|nullptr]
    int count = 1;
    while (true){
        count++;
        if (counter_pointer->get_node_pointer() == nullptr) break;
        counter_pointer = counter_pointer->get_node_pointer();
        // cout << "counter_pointer_data: " << counter_pointer->get_data() << endl;
        // cout << "count               : " << count << endl;
    }

    if (position < 1 || position > count) {
        cout <<"outside range";
        return;
    }
    else {
        /* coding strat from here next time */
        Node* traverse_pointer = new Node();
        traverse_pointer = head;

        int i = 1;
        while (i < position-1) {
            traverse_pointer = traverse_pointer->get_node_pointer();
            i++;
        }

        Node* temp_pointer = new Node();
        temp_pointer = traverse_pointer->get_node_pointer()->get_node_pointer();

        traverse_pointer->get_node_pointer()->set_node_pointer(nullptr);
        traverse_pointer->set_node_pointer(temp_pointer);

    }

/*
    cout << "Test: ";
    cout << head->get_data()<< " ";
    cout << head->get_node_pointer()->get_data()<< " ";
    cout << head->get_node_pointer()->get_node_pointer()->get_data()<< " ";
    cout << head->get_node_pointer()->get_node_pointer()->get_node_pointer()->get_data()<< " ";
    cout << head->get_node_pointer()->get_node_pointer()->get_node_pointer()->get_node_pointer()->get_data()<< " ";
*/
}


int LinkedList :: getItem(int position){
    Node* counter_pointer = new Node();
    counter_pointer = head;
    int count = 1;
    while (true){
        count++;
        if (counter_pointer->get_node_pointer() == nullptr)     break;
        counter_pointer = counter_pointer->get_node_pointer();
    }

    if (position > count) return  std::numeric_limits< int >::max();
    else {
        Node* traverse_pointer = new Node();
        traverse_pointer = head;

        // trav->[Node1] --> [Node2] --> [Node3] --> [Node4]
        for (int i=1; i<position; i++){
            traverse_pointer = traverse_pointer->get_node_pointer();
        }
        cout << traverse_pointer->get_data() << " ";
        return traverse_pointer->get_data();
    }
}



void LinkedList :: printItems(){
    Node* traverse_pointer = new Node();
    traverse_pointer = head;

    if (traverse_pointer == nullptr) return;

    while (traverse_pointer != nullptr){
        cout << traverse_pointer->get_data() << " ";
        traverse_pointer = traverse_pointer->get_node_pointer();
    }
    return ;
}

LinkedList :: ~LinkedList(){
    delete head;
}







