#include "DocumentManager.h"

void DocumentManager::addDocument(const std::string& name, int id, int licenseLimit) {
    documents[id] = {name, id, licenseLimit, 0};
}

void DocumentManager::addPatron(int patronID) {
    patrons[patronID] = true;
}

int DocumentManager::search(const std::string& name) {
    for (const auto& document : documents) {
        if (document.second.name == name) {
            return document.second.id;
        }
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (patrons.count(patronID) == 0)
        return false;

    Document& document = documents[docid];
    if (document.borrowedCount >= document.licenseLimit)
        return false;

    document.borrowedCount++;
    borrowedDocuments.push_back(docid);
    return true;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if (patrons.count(patronID) == 0)
        return;

    Document& document = documents[docid];
    document.borrowedCount--;
    borrowedDocuments.remove(docid);
}
