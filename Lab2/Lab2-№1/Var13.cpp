#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

int main() {
    double a, b, F;
    std::cout << "Введите число a и b: ";
    std::cin >> a >> b;
    F = (sqrt(3) * pow((a - b), 2) * pow(sin(1 - a / b), 2) * M_PI / 3 * pow(cos(1 - b / a), 2) * M_PI / 3) / (0.701 * log(pow((a - b), 2)));
    std::cout << "F = " << F << std::endl;
    return 0;
}