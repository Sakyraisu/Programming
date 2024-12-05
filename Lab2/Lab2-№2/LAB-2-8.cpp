#include <cstdio>
#include <cmath>
#include <iostream>

int main() {
    double x, y;
    printf("Введите число x и y: ");
    scanf("%lf %lf", &x, &y);
    if (x >= 0 && y >= x - 6 && x * x + y * y <= 36) {
        printf("Да\n");
    }
    else {
        printf("Нет\n");
    }
    return 0;
}