#include <vector>
#include <string>
#include <iostream>

using namespace std;

const int MAX_NODE = 26;

class TrieNode {
public:
    vector<TrieNode*> children;
    bool isEndOfWord;
    
    TrieNode() {
        children = vector<TrieNode*>(MAX_NODE, nullptr);
        isEndOfWord = false;
    }
};

class Autocomplete {
private:
    TrieNode* root;
    
    void insertHelper(TrieNode* node, string word) {
        for (char c : word) {
            int index = c - 'a';
            if (node->children[index] == nullptr) {
                node->children[index] = new TrieNode();
            }
            node = node->children[index];
        }
        node->isEndOfWord = true;
    }
    
    void getSuggestionsHelper(TrieNode* node, string partialWord, vector<string>& suggestions) {
        if (node->isEndOfWord) {
            suggestions.push_back(partialWord);
        }
        for (int i = 0; i < MAX_NODE; i++) {
            if (node->children[i] != nullptr) {
                getSuggestionsHelper(node->children[i], partialWord + char('a' + i), suggestions);
            }
        }
    }
    
public:
    Autocomplete() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        insertHelper(root, word);
    }
    
    vector<string> getSuggestions(string partialWord) {
        vector<string> suggestions;
        TrieNode* node = root;
        for (char c : partialWord) {
            int index = c - 'a';
            if (node->children[index] == nullptr) {
                return suggestions;
            }
            node = node->children[index];
        }
        getSuggestionsHelper(node, partialWord, suggestions);
        return suggestions;
    }
};



int main() {
    Autocomplete autocomplete;
    autocomplete.insert("apple");
    autocomplete.insert("banana");
    autocomplete.insert("orange");
    
    vector<string> suggestions = autocomplete.getSuggestions("a");
    for (string suggestion : suggestions) {
        cout << suggestion << endl;
    }
    // Output: "apple"
    
    suggestions = autocomplete.getSuggestions("b");
    for (string suggestion : suggestions) {
        cout << suggestion << endl;
    }
    // Output: "banana"
    
    suggestions = autocomplete.getSuggestions("o");
    for (string suggestion : suggestions) {
        cout << suggestion << endl;
    }
    // Output: "orange"
    
    suggestions = autocomplete.getSuggestions("ap");
    for (string suggestion : suggestions) {
        cout << suggestion << endl;
    }
    // Output: "apple"
    
    return 0;
}