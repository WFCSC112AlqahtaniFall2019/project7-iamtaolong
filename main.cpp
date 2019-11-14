
#include <iostream>
#include <fstream>
#include <string>
#include "Data.h"
#include "Stack.h"
#include "Queue.h"
#include "SortedLinkedList.h"
using namespace std;


int main() {

    cout << "Opening programing" << endl;

    Data other;
    Stack* mainstack = new Stack;
    Queue* mainqueue = new Queue;
    SortedLinkedList* finalsortedList = new SortedLinkedList;


    ifstream in;
    ofstream stack;
    ofstream queue;
    ofstream sort;

    in.open("pseudo_facebook.csv");
    stack.open("stack.txt");
    queue.open("queue.txt");
    sort.open("sort.txt");


    if (!in.is_open()){
        cout << "Input file not opened correctly" << endl;
        return 1;
    }
    if (!stack.is_open()){
        cout << "Stack file not opened correctly" << endl;
        return 100;
    }
    if (!queue.is_open()){
        cout << "Queue file not opened correctly" << endl;
        return 10000;
    }
    if (!sort.is_open()){
        cout << "Sort file not opened correctly" << endl;
        return 1000000;
    }


    while (!in.eof()) {

        string gender;
        string age ;
        string friendsCount;
        string likesReceivedCount;

        getline(in, gender, ',');
        getline(in, age, ',');
        getline(in, friendsCount, ',');
        getline(in, likesReceivedCount);
        cout << gender << " " << age << " " << friendsCount << "  " << likesReceivedCount << endl;


        Data nextUser = Data(gender, stoi(age), stoi(friendsCount), stoi(likesReceivedCount));

        mainstack->push_head(nextUser); //putting the information in the stack
        mainqueue->enqueue_tail(nextUser); //putting the information in the queue
        finalsortedList->insertSorted(nextUser); //putting the information in the linkedlist
        other = nextUser;
    }



    mainstack->print(stack,other);
    mainqueue->print(queue,other);
    finalsortedList->print(sort,other);


    while (mainstack->pop_head(other));
    while (mainqueue->dequeue_head());

    in.close ();
    stack.close ();
    queue.close ();
    sort.close ();
    cout<<" D O N E "<<endl;
    return 0;
}
