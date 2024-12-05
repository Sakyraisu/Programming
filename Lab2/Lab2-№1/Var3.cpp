#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

int main() {
    double a, b, F;
    std::cout << "Введите число a и b: ";
    std::cin >> a >> b;
    F = 0.314 * exp(a) - 0.512 * exp(b) * log(a) / sin(b * M_PI);
    std::cout << "F = " << F << std::endl;
    return 0;
}