#include "allLibs.hpp"

class Node {
  
public:
    string word;
    Node *next;
    
    Node (string word = "", Node *next = nullptr) {
        this->word = word;
        this->next = next;
    }
};


class List {
    
    Node *head;
    Node *tail;
    void DeleteWord (Node *current);
    
public:
    List();
    void Push (string word);
    void Search_and_Delete (string word);
    void Print();
};
