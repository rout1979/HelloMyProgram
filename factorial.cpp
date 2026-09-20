#include <iostream>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;

    std::cout << "Enter a non-negative integer: ";
    if (!(std::cin >> number)) {
        std::cerr << "Invalid input.\n";
        return 1;
    }

    if (number < 0) {
        std::cerr << "Factorial is not defined for negative numbers.\n";
        return 1;
    }

    std::cout << number << "! = " << factorial(number) << '\n';
    return 0;
}
