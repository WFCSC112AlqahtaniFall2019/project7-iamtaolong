//
// Created by Tao on 11/12/19.
//

#include <iostream>
#include <fstream>
#include "SortedLinkedList.h"

#include <string>
using namespace std;

// default constructor


// includes a member public function named “insertSorted” takes in a Data object, creates a Node pointer,
// and inserts it into the Sorted Linked List at the appropriate place in the list as determined by the
// comparison operators you will overload in the Data class. You are encouraged to reuse your code from InsertionSort project.
void SortedLinkedList:: insertSorted(Data FBuser) {

    // create a new node object
    Node* insert = new Node(FBuser);

    // case1: empty list
    if (head == nullptr) {
        // insert on the head
        head = insert;
    }

    // case2: non emptyy
    else {

        // current node
        Node *current = head;

        // previous node
        Node *previous = nullptr;

        // if it is smaller
        if (current -> data > insert -> data) {

            // append in the head
            insert -> next = head;
            // relink
            head = insert;

            return;
        }

        // get next
        previous = current;
        current = current->next;

        // find loop
        while (current && insert -> data > current -> data) {

            // getting the next
            previous = current;
            current = current->next;
        }

        // getting next
        insert -> next = current;
        previous -> next = insert;
    }
}