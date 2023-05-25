#ifndef DOCUMENT_MANAGER_H
#define DOCUMENT_MANAGER_H

#include <unordered_map>
#include <list>
#include <string>

class DocumentManager {
private:
    struct Document {
        std::string name;
        int id;
        int licenseLimit;
        int borrowedCount;
    };

    std::unordered_map<int, Document> documents;
    std::unordered_map<int, bool> patrons;
    std::list<int> borrowedDocuments;

public:
    void addDocument(const std::string& name, int id, int licenseLimit);
    void addPatron(int patronID);
    int search(const std::string& name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
};

#endif  // DOCUMENT_MANAGER_H
