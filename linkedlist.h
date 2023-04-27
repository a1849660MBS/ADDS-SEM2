#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
    private:
    Node* head;

public:
    LinkedList();
    
    LinkedList(int* array, int len);

    ~LinkedList();

    // print every node's data line-by-line
    void printList();


    int get(int pos);


     // create a new node with an int of data at the index'th position of the list; inserting out of bounds does nothing
    void insertPosition(int item, unsigned int index);

    // delets the node from the int'th position
      bool deletePosition(int pos);


    // traverse the list until reaching the node at specified position, & return that node's address
    Node* search(unsigned int index) const;
    
   

    // deletes the front node from the list
    void deleteFromFront();

  
};

#endif