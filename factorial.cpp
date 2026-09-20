#include <iostream>

int main() {
    unsigned int number;

    std::cout << "Enter a non-negative integer: ";
    if (!(std::cin >> number)) {
        std::cerr << "Invalid input.\n";
        return 1;
    }

    unsigned long long factorial = 1;
    for (unsigned int i = 2; i <= number; ++i) {
        factorial *= i;
    }

    std::cout << number << "! = " << factorial << '\n';
    return 0;
}
