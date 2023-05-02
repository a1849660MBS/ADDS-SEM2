#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
    size = 0;
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->getLink();
        delete current;
        current = next;
    }
}

LinkedList::LinkedList(int* array, int len){
    if (len <= 0) {
        head = nullptr;
        size = 0;
        return;
    }
    head = new Node(array[0]);
    Node* current = head;
    for (int i = 1; i < len; i++) {
        current->setLink(new Node(array[i]));
        current = current->getLink();
    }
    size = len;
}

void LinkedList::insertPosition(int pos, int newNum) {
 if (pos <= 1 || head == nullptr) {
        Node* newNode = new Node(newNum);
        newNode->setLink(head);
        head = newNode;
        size++;
    } else if (pos > size) {
        Node* newNode = new Node(newNum);
        Node* current = head;
        while (current->getLink() != nullptr) {
            current = current->getLink();
        }
        current->setLink(newNode);
        size++;
    } else {
        Node* newNode = new Node(newNum);
        Node* current = head;
        for (int i = 1; i < pos - 1; i++) {
            current = current->getLink();
        }
        newNode->setLink(current->getLink());
        current->setLink(newNode);
        size++;
    }
}

bool LinkedList::deletePosition(int pos) {
     if (pos < 1 || pos > size) {  // out-of-bounds check
        return false;
    }
    if (pos == 1) {  // delete head
        Node* temp = head;
        head = head->getLink();
        delete temp;
    } else {  // delete node at pos
        Node* curr = head;
        for (int i = 1; i < pos - 1; i++) {
            curr = curr->getLink();
        }
        Node* temp = curr->getLink();
        curr->setLink(temp->getLink());
        delete temp;
    }
    size--;
    return true;
}

int LinkedList::get(int pos) {
    if (head == nullptr || pos < 1) {
        return std::numeric_limits<int>::max();
    } else {
        Node* curr = head;
        for (int i = 1; i < pos && curr != nullptr; i++) {
            curr = curr->getLink();
        }
        if (curr == nullptr) {
            return std::numeric_limits<int>::max();
        } else {
            return curr->getData();
        }
    }
}

int LinkedList::search(int target) {
    Node* curr = head;
    int pos = 1;
    while (curr != nullptr) {
        if (curr->getData() == target) {
            return pos;
        }
        curr = curr->getLink();
        pos++;
    }
    return -1;
}


void LinkedList::printList() {
    if (head == nullptr) {
        return;
    }
    std::cout << "[";
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->getData();
        if (current->getLink() != nullptr) {
            std::cout << " ";
        }
        current = current->getLink();
    }
    std::cout << "]";
}