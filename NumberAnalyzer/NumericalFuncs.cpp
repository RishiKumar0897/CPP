#pragma once
#include <iostream>
#include "BoolFuncs.h"

int digitCount(int number) {
    if (number == 0) 
        return 1;
    
    int count {0};
    if (number < 0) {
        number = -number; // Make number positive
    }

    if (number < 10) {
        return 1;
    }
    return 1 + digitCount(number / 10);

}

int printAnalysis(int number) {
    int digits = digitCount(number);
    bool even = isEven(number);
    bool odd = isOdd(number);

    std::cout << "Analysis of number: " << number << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << number << " is a " << (even ? "even" : "odd") << " number." << std::endl;
    std::cout << number << " has " << digits << " digit(s)." << std::endl;
    std::cout << number << " is " << (number > 0 ? "positive." : (number < 0 ? "negative." : "zero.")) << std::endl;
    return 0;

}