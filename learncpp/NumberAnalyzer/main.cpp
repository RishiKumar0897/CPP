#include <iostream>
#include "BoolFuncs.h"
#include "NumericalFuncs.h"

int main() {
    std::cout << "Welcome to NumberAnalyzer!" << std::endl;

    int number;
    std::cout << "Please enter an integer: ";
    std::cin >> number;
    printAnalysis(number);
    
    return 0;
}

