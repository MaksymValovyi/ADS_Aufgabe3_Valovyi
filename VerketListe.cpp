#include <iostream>
using namespace std;

#include "Node.h"

template <typename T>

class Liste {
private:
    int size = 0;
    Node<T>* head;

public:
    Liste(int n) : head(nullptr), size(n){

    }

    /**
     * Inserts a new node with the given value into the circular linked list.
     * If the list is empty, the new node becomes the head of the list.
     * Otherwise, the new node is inserted at the end of the list.
     *
     * @param value The value to be inserted into the list.
     */
    void insert(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (!head) {
            head = newNode;
            head->LinkNodes(head);
            return;
        }
        Node<T>* current = head;
        while (current->NextInfo() != head) {
            current = current->NextInfo();
        }
        current->LinkNodes(newNode);
        newNode->LinkNodes(head);

        size++;
    }

    void removeLast() {
        if(!head) {
            cout << "Liste ist leer." << endl;
            return;
        } else {
            //---------------------
            Node<T>* current = head;
            Node<T>* previous = nullptr;
            while (current->NextInfo() != head) {
                previous = current;
                current = current->NextInfo();
            }

            previous->LinkNodes(head);
            //delete current;
            size--;
            
        }
    }
    
    void print() {
        if (!head) {
            cout << "Liste ist leer." << endl;
            return;
        }
        Node<T>* current = this->head;
        do {
            current->GetValue();
            current = current->NextInfo();
        } while (current != this->head);
        cout << endl;
    }

    int getSize() {
        return size;
    }

    ~Liste() {
        if (!head) return;
        Node<T>* current = head;
        Node<T>* nextNode;
        do {
            nextNode = current->NextInfo();
            delete current;
            current = nextNode;
        } while (current != head);
    }
};