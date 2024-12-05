#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

int main() {
    double a, b, F;
    std::cout << "Введите число a и b: ";
    std::cin >> a >> b;
    F = sqrt(3) * ((a - b) / (b + a)) * exp(1) * (log(cos((a - b) * M_PI / 8)) / 0.137);
    std::cout << "F = " << F << std::endl;
    return 0;
}
