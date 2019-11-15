//
// Created by Tao on 11/12/19.
//

#include "Queue.h"

//default constructor
Queue::Queue() {

    // form an empty list
    tail = nullptr;
}

// a member public function named “enqueue_tail” takes in a Data object, creates a Node pointer,
// and inserts it into the Queue at the tail of the list.
void Queue::enqueue_tail(Data& FBuser){

    // use new
    Node * node = new Node(FBuser);

    // if the list is empty
    if (head == nullptr){
        // add on the tail
        head= node ;
        tail = node;
    }
    // if it has something in it
    else{
        // append it on the tail
        tail->next=node;
        tail=node;
    }
}

//o	a member public function named “dequeue_head” removes a Data object pointed to by the head pointer;
// returns a boolean with value true if the list is not empty, false if the list is empty.
bool Queue::dequeue_head() {

    // deletion = head
    Node* deletion = head;

    // if empty list
    if(head!= nullptr){
        head = head -> next;
        // avoid dangling pointer
        deletion -> next = nullptr;
        // delete
        delete deletion;
        return true;
    }

    else{
        return false;
    }
}