#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
    double S = 0, Sn, E;
    int n = 1;
    printf("Введите число E: ");
    std::cin >> E;
    while (true) {
        Sn = (n - 1) / (pow(2, n) - 1);
        if (Sn < E) {
            break;
        }
        S += Sn;
        ++n;
    }
    printf("Сумма S: %lf\n", S);
    return 0;
}