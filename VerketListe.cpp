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
            size++;
            return;
        }
        Node<T>* current = head;
        while (current->NextInfo() != head) {
            current = current->NextInfo();
        }
        current->LinkNodes(newNode);
        newNode->LinkNodes(head);

        size++;
        //cout << "Size NOW : " << size << endl;
    }

    void removeLast() {
        if(size == 0) {
            cout << "Liste ist leer. REMOVE" << endl;
            return;
        } else if(size == 1){  
            //cout << "Liste hat nur ein Element." << endl;
            //delete head;
            head = nullptr;
            size = 0;
        }else{
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
        
        cout << "Size NOW  removeLast: " << size << endl;
    }

    
    void print() {
        if (size <= 0) {
            cout << "Liste ist leer. PRINT" << endl;
            return;
        }
        Node<T>* current = this->head;
        do {  
            current->GetValue();
            current = current->NextInfo();
        } while (current != this->head);
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

    void printTop(){
        head->GetValue();
    }

    T getTop(){
        return head->returnValue();
    }

    T getOnIndex(int index){
        if(index > size){
            cout << "Index out of bounds" << endl;
            return 0;
        }
        Node<T>* current = head;
        for(int i = 0; i < index; i++){
            current = current->NextInfo();
        }
        return current->returnValue();
    }

};
