#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

int main()
{
    double a, b, F;
    std::cout << "Введите число a и b: ";
    std::cin >> a >> b;
    F = ((0.75 * sqrt(b) - 0.5 * sqrt(3) * a) * sin(b * M_PI / 3)) / cos(pow(a + b, 2) + exp(a));
    std::cout << "F = " << F << std::endl;
    return 0;
}