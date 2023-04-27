#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    while(head != nullptr) {
        deleteFromFront();
    }
}

LinkedList::LinkedList(int* array, int len){
    if(len <= 0){
        head = nullptr;
        return;
    }

    head = new Node(array[0]);

    Node * curr = head;

for (int i = 1; i < len; i++) {
    curr->setLink(new Node(array[i]));
    curr = curr->getLink();
  }
}




void LinkedList::printList() {
    Node* currNode = head; 

    while (currNode != nullptr) { 
        std::cout << currNode->getData() << std::endl; 
        currNode = currNode->getLink(); 
    } 
    std::cout << std::endl; 
}

Node* LinkedList::search(unsigned int index) const {
    unsigned int position = 0;
    Node* currNode = head; 

    while (currNode != nullptr && position < index) { 
        currNode = currNode->getLink(); 
        position++;
    } 
    
    return currNode;
}

void LinkedList::insertPosition(int item, unsigned int index) {
    Node* newNode = new Node(item);
    if (index <= 1 || head == nullptr) {
        newNode->setLink(head);
        head = newNode;
    }
    else {
        Node* current = head;
        for (int i = 1; i < index - 1 && current->getLink() != nullptr; i++) {
            current = current->getLink();
        }
        newNode->setLink(current->getLink());
        current->setLink(newNode);
    }
}

void LinkedList::deleteFromFront() {
    if (head == nullptr) {
        return;
    }

    Node* temp = head;
    head = head->getLink();
    delete temp;
}




 bool LinkedList::deletePosition(int pos){
if (head == nullptr) {
    return false;
  }

  if (pos <= 1) {
    Node* temp = head;
    head = head->getLink();
    delete temp;
    return true;
  }

  int count = 1;
  Node* curr = head;
  while (curr->getLink() != nullptr && count < pos - 1) {
    curr = curr->getLink();
    count++;
  }

  if (curr->getLink() == nullptr) {
    return false;
  }

  Node* temp = curr->getLink();
  curr->setLink(temp->getLink());
  delete temp;
  return true;
 }


int LinkedList::get(int pos){
    
    if (pos <= 0) {
        return std::numeric_limits<int>::max();
    }
    Node* current = head;
    for (int i = 1; i < pos && current != nullptr; i++) {
        current = current->getLink();
    }
    if (current == nullptr) {
        return std::numeric_limits<int>::max();
    }
    return current->getData();

}