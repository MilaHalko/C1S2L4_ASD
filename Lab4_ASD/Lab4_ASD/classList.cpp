#include "classList.hpp"

List::List() {
    head = nullptr;
    tail = nullptr;
}

void List::Push(string word) {
    
    if (head == nullptr) {
        head = new Node(word);
        tail = head;
    }
    else {
        tail->next = new Node(word);
        tail = tail->next;
    }
}


void List::Search_and_Delete (int length) {
    
    Node *current = head;
    
    while (current != nullptr) {
        if (length == current->word.size()) {
            DeleteWord(current);
        }
        current = current->next;
    }
}


void List::DeleteWord(Node *current) {
    
    if (current == head) {
        Node *exHead = head;
        head = head->next;
        delete exHead;
    }
    else {
        if (current == tail) {
            Node *exTail = tail;
            Node *newTail = head;
            while (newTail->next != tail) {
                newTail = newTail->next;
            }
            tail = newTail;
            tail->next = nullptr;
            delete exTail;
        }
        else {
            Node *prevItem = head;
            
            while (prevItem->next != current) {
                prevItem = prevItem->next;
            }
            
            prevItem->next = current->next;
            delete current;
        }
    }
}


void List::Print() {
    
    Node *current = head;
    while (current != tail)
    {
        cout << current->word << ", ";
        current = current->next;
    }
    cout << tail->word;
}
