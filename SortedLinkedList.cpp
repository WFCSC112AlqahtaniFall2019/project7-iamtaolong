//
// Created by Tao on 11/12/19.
//

#include <iostream>
#include <fstream>
#include "SortedLinkedList.h"
#include "LinkedList.h"
#include <string>
using namespace std;

// default constructor
SortedLinkedList :: SortedLinkedList(){}

//●	includes a member public function named “insertSorted” takes in a Data object, creates a Node pointer,
// and inserts it into the Sorted Linked List at the appropriate place in the list as determined by the
// comparison operators you will overload in the Data class. You are encouraged to reuse your code from InsertionSort project.
void SortedLinkedList:: insertSorted(Data& FBUser) {

    // make new node
    Node *newUser = new Node(FBUser);

    // empty list
    if (head == nullptr) {
        // then append it in head
        head = newUser;
    }

    // if it is not empty, comments are so boring...
    else {

        // get head
        Node *now = head;
        int count = 0;
        Node *previous = nullptr;
        bool sorted;

        // if the likesCount is bigger, using the comaprison operator
        if (now->data > newUser->data) {

            // make an insertion now
            newUser->next = head;
            head = newUser;
            return;
        }
        previous = now;

        // continuing getting next node
        now = now->next;

        // iterations
        while (now) {
            if (newUser->data > now->data) {
                previous = now;
                now = now->next;
            }
        }

        // we could make the interstion now
        Node *temp = now;
        newUser->next = now;
        previous->next = newUser;

    }
}