#include "Stack_Auf3.h"

template<class T> inline void Stack<T>::push(const T &value){
    if (value == '+'){
        cout << size << endl;
        int a = data.getOnIndex(size-1);

        this->pop();

        int b = data.getOnIndex(size-1);

        this->pop();
        int c = a + b;
        this->push(c);
        //cout <<  "a: " << a << endl;
    }else if(value == '-'){
        int a = data.getOnIndex(size-1);
        this->pop();

        int b = data.getOnIndex(size-1);
        this->pop();

        int c = a - b;
        this->push(c);

    }else if(value == '*'){
        int a = data.getOnIndex(size-1);

        this->pop();


        int b = data.getOnIndex(size-1);

        this->pop();
;
        int c = a * b;

        this->push(c);

    }else if(value == '/'){
        int a = data.getOnIndex(size-1);

        this->pop();


        int b = data.getOnIndex(size-1);

        this->pop();

        int c = b / a;

        this->push(c);


    }else{
        data.insert(value);
        getInfoPushedData(value);
        size++;
    }

    
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

template<class T> void Stack<T>::printTop(){
    data.printTop();
}

template<class T> T Stack<T>::getOnIndex(int index){
    return data.getOnIndex(index);
}

