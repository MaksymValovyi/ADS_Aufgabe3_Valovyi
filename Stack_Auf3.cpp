#include "Stack_Auf3.h"

/**
 * @brief Pushes a value onto the stack.
 * 
 * This function pushes a value onto the stack. If the value is an arithmetic operator (+, -, *, /),
 * it performs the corresponding arithmetic operation on the top two values of the stack and pushes the result back onto the stack.
 * If the value is not an arithmetic operator, it simply inserts the value into the stack.
 * 
 * @tparam T The type of the value to be pushed onto the stack.
 * @param value The value to be pushed onto the stack.
 */
template<class T> inline void Stack<T>::push(const T &value){
    if (value == '+'){
        cout << "Pushed + " << endl;
        int a = data.getOnIndex(size-1);
        this->pop();
        int b = data.getOnIndex(size-1);
        this->pop();
        int c = a + b;
        this->push(c);
    }else if(value == '-'){
        cout << "Pushed - " << endl;
        int a = data.getOnIndex(size-1);
        this->pop();
        int b = data.getOnIndex(size-1);
        this->pop();
        int c = a - b;
        this->push(c);
    }else if(value == '*'){
        cout << "Pushed * " << endl;
        int a = data.getOnIndex(size-1);
        this->pop();
        int b = data.getOnIndex(size-1);
        this->pop();
        int c = a * b;
        this->push(c);
    }else if(value == '/'){
        cout << "Pushed / " << endl;
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

/**
 * Removes the top element from the stack.
 * If the stack is empty, it prints "Stack is empty".
 * Otherwise, it removes the last element from the underlying data structure and decrements the size.
 * 
 * @tparam T The type of elements stored in the stack.
 */
template<class T> void Stack<T>::pop(){
    if(data.getSize() < 0){
        cout << "Stack is empty" << endl;
    }else{
        data.removeLast();
        size--;
    }
}

/**
 * Prints the value that is pushed onto the stack.
 * 
 * @param value The value that is pushed onto the stack.
 */
template<class T> void Stack<T>::getInfoPushedData(const T &value){
    cout << "Pushed: " << value << endl;
}

/**
 * @brief Prints the popped value from the stack.
 * 
 * This function is used to print the value that is popped from the stack.
 * 
 * @tparam T The type of elements in the stack.
 * @param value The value that is popped from the stack.
 */
template<class T> void Stack<T>::getInfoPoppedData(const T &value){
    cout << "Popped: " << value << endl;
}

/**
 * Checks if the stack is empty.
 * 
 * @tparam T The type of elements in the stack.
 */
template<class T> void Stack<T>::isEmpty(){
    if(data.size() == 0){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
}

/**
 * @brief Displays the elements of the stack.
 * 
 * This function prints the elements of the stack in the order they were pushed.
 * 
 * @tparam T The type of elements in the stack.
 */
template<class T> void Stack<T>::showStack(){
    data.print();
    cout << endl;
}

/**
 * Prints the top element of the stack.
 * This function calls the printTop() function of the underlying data structure.
 * 
 * @tparam T The type of elements stored in the stack.
 */
template<class T> void Stack<T>::printTop(){
    data.printTop();
}

/**
 * Retrieves the element at the specified index in the stack.
 * 
 * @param index The index of the element to retrieve.
 * @return The element at the specified index.
 */
template<class T> T Stack<T>::getOnIndex(int index){
    return data.getOnIndex(index);
}

