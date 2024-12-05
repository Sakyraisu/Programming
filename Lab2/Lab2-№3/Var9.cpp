#include <cstdio>
#include <cmath>
#include <iostream>

int main() {
    double S = 0, Sn, E;
    int n = 1;
    printf("Введите число E: ");
    std::cin >> E;
    while (true) {
        Sn = 1 / pow(n + 2, n + 1);
        if (Sn < E) {
            break;
        }
        S += Sn;
        ++n;
    }
    printf("Сумма S: %lf\n", S);
    return 0;
}