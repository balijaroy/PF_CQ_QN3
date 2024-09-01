#include <iostream>

// Function to calculate the greatest common divisor using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to reduce the fraction
int reduce(int &num, int &denom) {
    // Check for invalid input
    if (num <= 0 || denom <= 0) {
        return 0;
    }

    // Find the greatest common divisor 
    int divisor = gcd(num, denom);

    // Reduce the fraction
    num /= divisor;
    denom /= divisor;

    return 1;
}

int main() {
    int numerator, denominator;

    std::cout << "Enter numerator: ";
    std::cin >> numerator;
    std::cout << "Enter denominator: ";
    std::cin >> denominator;

    int result = reduce(numerator, denominator);

    if (result == 0) {
        std::cout << "Invalid input. Both numerator and denominator must be positive integers." << std::endl;
    } else {
        std::cout << "Reduced fraction: " << numerator << "/" << denominator << std::endl;
    }

    return 0;
}
