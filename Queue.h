//
// Created by Tao on 11/12/19.
//

#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H

#include "LinkedList.h"
using namespace std;

// inherits from LinkedList class that is given to you.
class Queue: public LinkedList{
public:

    // a default constructor,
    Queue();

    // a member public function named “enqueue_tail” takes in a Data object, creates a Node pointer,
    // and inserts it into the Queue at the tail of the list.
    void enqueue_tail(Data &FBuser);

    //o	a member public function named “dequeue_head” removes a Data object pointed to by the head pointer;
    // returns a boolean with value true if the list is not empty, false if the list is empty.
    bool dequeue_head();

private:
    // a private Node *tail,
    Node* tail;
};

#endif //PROJECT7_QUEUE_H
