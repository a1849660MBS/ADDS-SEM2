#include "Node.h"

Node::Node(int data) {
    this->data = data;
    this->link = link;
}

int Node::getData() {
    return data;
}

    void Node::setData(int Data){
        this->data = Data;
    }

    Node* Node::getLink(){
        return link;
    }

    void Node::setLink(Node *link){
        this ->link = link;
    }