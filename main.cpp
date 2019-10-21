#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

int main() {
    int iterations;
    int counter = 1;
    long double value = 4;
    bool add = true;

    std::cout << "How many iterations should we run?\n";
    std::cin >> iterations;

    for (int i = 0; i < iterations; i++) {
        counter = counter + 2;
        long double sum = double(4)/counter;
        add = !add;
        if (add) {
            value = value + sum;
        } else {
            value = value - sum;
        }
    }
    std::cout << std::fixed << std::setprecision(std::numeric_limits<double>::digits10 + 1) << "Calculated a value of: " << double(value) << "\n";
}