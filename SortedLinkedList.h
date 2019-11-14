//
// Created by Tao on 11/12/19.
//

#ifndef PROJECT7_SORTEDLINKEDLIST_H
#define PROJECT7_SORTEDLINKEDLIST_H
#include "LinkedList.h"
using namespace std;

//	inherits from LinkedList class that is given to you.
class SortedLinkedList : public LinkedList{

public:

    // default consturctor
    SortedLinkedList();

    //●	includes a member public function named “insertSorted” takes in a Data object, creates a Node pointer,
    // and inserts it into the Sorted Linked List at the appropriate place in the list as determined by the
    // comparison operators you will overload in the Data class. You are encouraged to reuse your code from InsertionSort project.
    void insertSorted(Data &stat);
};

#endif //PROJECT7_SORTEDLINKEDLIST_H

