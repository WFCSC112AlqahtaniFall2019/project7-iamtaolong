//
// Created by Tao on 11/12/19.
//

#include "Stack.h"

// inherits from LinkedList class that is given to you.
Stack::Stack() {
    head = nullptr;
}

// a member public function named “push_head” takes in a Data object,
// creates a Node pointer, and inserts it into the Stack at the head of the list,
void Stack::push_head(Data &stat){

    // push in the head
    Node* node = new Node(stat);
    node->next = head;
    head = node;
}

// a member public function named “pop_head” removes a Data object pointed to by the head pointer;
// returns a boolean with value true if the list is not empty, false if the list is empty.
bool Stack::pop_head(Data &da) {

    // delete in the head
    Node* deletion = head;

    // case1: empty
    if(head->next = nullptr){
        return false;
    }

    // case2: not empty, boring*1000000
    else{
        head = head->next;
        //ostream
        delete (deletion);
        return true;
    }
}