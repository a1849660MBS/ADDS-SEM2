#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H


#include <string>
#include <iostream>


const int MAX_NODE = 2;

class TrieNode {
public:
    TrieNode* children[MAX_NODE];
    int routerNumber;
    
    TrieNode();
};

class PrefixMatcher {
private:
    TrieNode* root;
    
    void insertHelper(TrieNode* node, std::string address, int routerNumber);
    
    int selectRouterHelper(TrieNode* node, std::string address);
    
public:
    PrefixMatcher();
    
    void insert(std::string address, int routerNumber);
    
    int selectRouter(std::string networkAddress);
};

#endif