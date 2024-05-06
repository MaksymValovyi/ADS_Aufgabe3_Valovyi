#include "Stack_Auf3.h"

template<class T> inline void Stack<T>::push(const T &value){
    data.insert(value);
    getInfoPushedData(value);
    size++;
}

template<class T> void Stack<T>::pop(){
    if(data.getSize() < 0){
        cout << "Stack is empty" << endl;
    }else{
        data.removeLast();
        size--;
        //getInfoPoppedData();
    }
    
}
template<class T> void Stack<T>::getInfoPushedData(const T &value){
    cout << "Pushed: " << value << endl;
}

template<class T> void Stack<T>::getInfoPoppedData(const T &value){
    cout << "Popped: " << value << endl;
}

template<class T> void Stack<T>::isEmpty(){
    if(data.size() == 0){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
}

template<class T> void Stack<T>::showStack(){
    data.print();
}