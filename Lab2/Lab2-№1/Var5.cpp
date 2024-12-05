#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

int main() {
    double a, b, F;
    std::cout << "Введите число a и b: ";
    std::cin >> a >> b;
    F = (sqrt(3) * a * cos(exp(b) - 1) * M_PI / 4) / 0.5121 * (1 - log(b / a));
    std::cout << "F = " << F << std::endl;
    return 0;
}