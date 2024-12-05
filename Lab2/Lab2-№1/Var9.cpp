#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

int main() {
    double a, b, F;
    std::cout << "Введите число a и b: ";
    std::cin >> a >> b;
    F = sqrt(3) * ((0.719 / b) * (pow(b, 2) - pow(a, 2)) / (pow(a, 2) + pow(b, 2)) + cos(log(b) * M_PI / 6));
    std::cout << "F = " << F << std::endl;
    return 0;
}