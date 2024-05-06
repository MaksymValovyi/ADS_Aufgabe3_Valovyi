#ifndef NODE_H  // Include guard to prevent multiple inclusions
#define NODE_H

#include <iostream>
using namespace std;

template <typename T>

class Node
{
private:
    T value;
    // Points to the next node. 
    Node* next;

public:
    Node(T data)
    {
        this->value = data;
    };

    ~Node(){
        delete next;
    };

    void LinkNodes(Node* linker) {
        this->next = linker;
    };

    void GetValue(){
        cout << value << " ";
    };

    Node* NextInfo() const{
        return this->next;
    };

    Node* NextInfo(){
        return next;
    };

    void ChangeNext(Node* dep){
        this->next = dep->NextInfo();
    };
};

#endif