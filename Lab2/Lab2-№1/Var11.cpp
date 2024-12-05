#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

int main() {
    double a, b, F;
    std::cout << "Введите число a и b: ";
    std::cin >> a >> b;
    F = (4.3 * sin((a + 1) * M_PI)) / ((b / a) * 1 - cos((a + b) * M_PI) + log(b));
    std::cout << "F = " << F << std::endl;
    return 0;
}