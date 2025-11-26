#include <iostream>


// first program: read in an integer and print its double
int main() {
    std::cout << "Enter an integer: ";
    int n{};
    std::cin >> n;
    std::cout << "Your integer doubled is " << 2 * n << '\n';
    return 0;
}
