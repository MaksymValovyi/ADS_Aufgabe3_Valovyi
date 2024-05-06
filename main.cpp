#include "stack.cpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    Stack<int> stack;

    std::string expression = "1 5 + 3 7 + * 5 /";
    int result = stack.evaluatePostfixExpression(expression);
    std::cout << "Result: " << result << std::endl;
    return 0;
}