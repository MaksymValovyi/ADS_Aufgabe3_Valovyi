#include <vector>
#include <string>
#include <iostream>
using namespace std;

#include "VerketListe.cpp"

template <typename T>
class Stack
{
private:
    int size;
    Liste<T> data;
public:
    Stack() : size(0), data(size) 
    { 

    }
    void getSize(){
        cout << "Size of stack : " << size << endl;
    }
    void push(const T& value);
    void getInfoPushedData(const T& value);
    void pop();
    void getInfoPoppedData(const T& value);
    void isEmpty();
    void calculatePostfixFromData();
    void showStack();
};




