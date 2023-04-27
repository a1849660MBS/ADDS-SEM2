#include "Node.h"

Node::Node(int data, Node* link) {
    this->data = data;
    this->link = link;
}
Node::Node(int a){
this ->data = a;

}
int Node::getData() const{
    return data;
}

    void Node::setData(int Data){
        this->data = Data;
    }

    Node* Node::getLink() const{
        return link;
    }

    void Node::setLink(Node *link){
        this ->link = link;
    }