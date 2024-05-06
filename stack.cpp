#include <iostream>
#include <vector>
#include <sstream>

template <typename T>

class Stack {
private:
    std::vector<T> data; // The underlying data structure for the stack.

public:
    /**
     * Pushes a value onto the top of the stack.
     * @param value The value to be pushed onto the stack.
     */
    void push(const T& value) {
        data.push_back(value);
    }

    /**
     * Removes the top element from the stack.
     * If the stack is empty, no operation is performed.
     */
    void pop() {
        if (!empty()) {
            data.pop_back();
        }
    }

    /**
     * Returns a reference to the top element of the stack.
     * @return A reference to the top element of the stack.
     */
    T& top() {
        return data.back();
    }

    /**
     * Checks if the stack is empty.
     * @return True if the stack is empty, false otherwise.
     */
    bool empty() const {
        return data.empty();
    }

    /**
     * Returns the number of elements in the stack.
     * @return The number of elements in the stack.
     */
    size_t size() const {
        return data.size();
    }

    void calculatePostfixFromData(){
        
    }
    /**
     * Evaluates a postfix expression and returns the result.
     * @param expression The postfix expression to be evaluated.
     * @return The result of the evaluation.
     */
    T evaluatePostfixExpression(const std::string& expression) {
        Stack<T> operandStack;

        std::istringstream iss(expression);
        std::string token;
        while (iss >> token) {
            if (isdigit(token[0])) {
                operandStack.push(static_cast<T>(std::stoi(token)));
            } else {
                T operand2 = operandStack.top();
                operandStack.pop();
                T operand1 = operandStack.top();
                operandStack.pop();

                if (token == "+") {
                    operandStack.push(operand1 + operand2);
                } else if (token == "-") {
                    operandStack.push(operand1 - operand2);
                } else if (token == "*") {
                    operandStack.push(operand1 * operand2);
                } else if (token == "/") {
                    operandStack.push(operand1 / operand2);
                }
            }
        }

        return operandStack.top();
    }
    
};
/*
int main() {
    Stack<int> stack;
    std::string expression = "1 5 + 3 7 + * 5 /";
    int result = stack.evaluatePostfixExpression(expression);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
*/