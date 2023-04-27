#ifndef NODE_H
#define NODE_H

class Node {

private:
    int data;
    Node* link;

public:
    Node(int, Node*);

    Node(int a);

    int getData() const;

    void setData(int Data);

    Node* getLink() const;

    void setLink(Node *link);

};

#endif