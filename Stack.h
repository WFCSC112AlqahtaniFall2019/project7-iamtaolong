//
// Created by Tao on 11/12/19.
//


#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H
#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include "Data.h"
#include <string>
using namespace std;

// inherits from LinkedList class that is given to you.
class Stack : public LinkedList{

public:

    // default constructor
    Stack();

    // a member public function named “push_head” takes in a Data object,
    // creates a Node pointer, and inserts it into the Stack at the head of the list,
    void push_head(Data &obj);

    // a member public function named “pop_head” removes a Data object pointed to by the head pointer;
    // returns a boolean with value true if the list is not empty, false if the list is empty.
    bool pop_head(Data &obj);
};



#endif //PROJECT7_STACK_H