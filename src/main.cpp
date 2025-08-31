#include <iostream>
#include "MathUtils.hpp"
#include "AdvancedMath.hpp"

int main() {
    int a = 3;
    int b = 4;

    std::cout << "a + b = " << MathUtils::add(a, b) << '\n';
    std::cout << "a * b = " << MathUtils::multiply(a, b) << '\n';
    std::cout << "square(a) = " << AdvancedMath::square(a) << '\n';
    return 0;
}