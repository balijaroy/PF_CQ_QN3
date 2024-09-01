#include <iostream>

int sum_from_to(int first, int last) {
    int sum = 0;

    // Ensure that first is less than or equal to last
    if (first > last) {
        std::swap(first, last);
    }

    // Calculate the sum using a loop
    for (int i = first; i <= last; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int start, end;
    std::cout << "Enter the first integer: ";
    std::cin >> start;
    std::cout << "Enter the last integer: ";
    std::cin >> end;

    int result = sum_from_to(start, end);
    std::cout << "The sum from " << start << " to " << end << " is " << result << std::endl;

    return 0;
}
