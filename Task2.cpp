#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double num1, num2, result;
    char operation;

    // Get user input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Get operation choice
    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    // Perform calculation based on the chosen operation
    switch (operation) {
    case '+':
        result = num1 + num2;
        cout << "Result: " << result << std::endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "Result: " << result << std::endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "Result: " << result << std::endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Result: " << result << std::endl;
        }
        else {
            cout << "Error: Division by zero is not allowed." << std::endl;
        }
        break;
    default:
        cout << "Invalid operation. Please choose +, -, *, or /." << std::endl;
    }

    return 0;
}
