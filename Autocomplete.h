#include <vector>
#include <string>
#include <iostream>



const int MAX_NODE = 26;

class TrieNode {
public:
    std::vector<TrieNode *> children;
    bool isEndOfWord;
    
    TrieNode();
};

class Autocomplete {
private:
    TrieNode* root;
    
    void insertHelper(TrieNode* node, std::string word);
    
    void getSuggestionsHelper(TrieNode* node, std::string partialWord, std::vector<std::string>& suggestions);
    
    
public:
    Autocomplete();
    
    void insert(std::string word);
    
    std::vector<std::string> getSuggestions(std::string partialWord);
};