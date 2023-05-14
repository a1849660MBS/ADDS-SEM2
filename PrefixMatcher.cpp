
#include <string>
#include <iostream>

#include "PrefixMatcher.h"

using namespace std;

TrieNode::TrieNode() {
        for (int i = 0; i < MAX_NODE; i++) {
            children[i] = nullptr;
        }
        routerNumber = -1;
    }

void PrefixMatcher::insertHelper(TrieNode* node, string address, int routerNumber) {
        for (char c : address) {
            int index = c - '0';
            if (node->children[index] == nullptr) {
                node->children[index] = new TrieNode();
            }
            node = node->children[index];
        }
        node->routerNumber = routerNumber;
    }


    int  PrefixMatcher::selectRouterHelper(TrieNode* node, string address) {
        int routerNumber = node->routerNumber;
        for (char c : address) {
            int index = c - '0';
            if (node->children[index] == nullptr) {
                break;
            }
            node = node->children[index];
            if (node->routerNumber != -1) {
                routerNumber = node->routerNumber;
            }
        }
        return routerNumber;
    }


    PrefixMatcher::PrefixMatcher() {
        root = new TrieNode();
    }

        void PrefixMatcher::insert(string address, int routerNumber) {
        insertHelper(root, address, routerNumber);
    }

        int PrefixMatcher::selectRouter(string networkAddress) {
        return selectRouterHelper(root, networkAddress);
    }