#include <cstdio>
#include <cmath>
#include <iostream>

int main() {
    double S = 0, Sn, E;
    int n = 1;
    printf("Введите число E: ");
    std::cin >> E;
    while (true) {
        Sn = 1 / (pow(2, n) - 3) * (pow(3, n) - 2);
        if (Sn < E) {
            break;
        }
        S += Sn;
        ++n;
    }
    printf("Сумма S: %lf\n", S);
    return 0;
}