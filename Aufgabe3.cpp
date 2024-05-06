#include <iostream>
#include <string>
using namespace std;

#include "Stack_Auf3.cpp"

int main(int argc, char const *argv[])
{
    //FIX SIZE
    //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    Stack<char> stack;
    //Stack<char> stack(size);
    stack.getSize();

    stack.push('1');
    stack.push('5');
    stack.push('/');
    stack.push('7');
    stack.push('5');
    stack.push('5');
    stack.push('7');
    stack.push('5');
    stack.push('5');

    stack.getSize();

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();



    cout << "After pop:" << endl;
    stack.getSize();

    stack.showStack();

    return 0;
}
