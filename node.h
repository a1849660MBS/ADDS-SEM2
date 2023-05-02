#ifndef NODE_H
#define NODE_H

class Node {

public:
    private:
        int data;
        Node* link;
    public:
        Node(int data);
        void setData(int data);
        void setLink(Node* link);
        int getData();
        Node* getLink();

};

#endif