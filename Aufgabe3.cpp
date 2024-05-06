#include <iostream>
#include <string>
using namespace std;

#include "Stack_Auf3.cpp"

int main(int argc, char const *argv[])
{

    Stack<int> stack;
    stack.getSize();


    
    stack.push(1);
    stack.push(5);
    stack.push('+');

    stack.showStack();
    cout << endl;

    stack.push(3);
    stack.push(7);
    stack.push('+');
    stack.showStack();
    cout << endl;
    stack.push('*');
    stack.showStack();
    cout << endl;
    stack.push(5);
    stack.push('/');
    stack.showStack();
    cout << endl;

    
    return 0;
}
