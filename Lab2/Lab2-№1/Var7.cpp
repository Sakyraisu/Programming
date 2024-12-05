#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

int main() {
    double a, b, F;
    std::cout << "Введите число a и b: ";
    std::cin >> a >> b;
    F = sqrt(3) * pow((0.127 * exp(b / a) / (1 - sqrt(3) * cos((b / a) * M_PI))), 2);
    std::cout << "F = " << F << std::endl;
    return 0;
}