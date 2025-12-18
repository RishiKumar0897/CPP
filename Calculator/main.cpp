#include <iostream>
#include "add.h"
#include "subtract.h"
#include "divide.h"
#include "multiply.h"

int main() {
    std::cout << "Welcome to the Calculator!" << std::endl;
    // Future implementation will go here
    int num1, num2;
    char operation;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    if (operation == '+') {
        std::cout << "Result: " << add(num1, num2) << std::endl;
    } else if (operation == '-') {
        std::cout << "Result: " << subtract(num1, num2) << std::endl;
    } else if (operation == '/') {
        std::cout << "Result: " << divide(num1, num2) << std::endl;
    } else if (operation == '*') {
        std::cout << "Result: " << multiply(num1, num2) << std::endl;
    } else {
        std::cout << "Unsupported operation." << std::endl;
    }

    return 0;
}