#include <cstdio>
#include <cmath>

int main() {
    double x, y;
    printf("Введите число x и y: ");
    scanf("%lf %lf", &x, &y);
    if (0 <= y && y <= fmin(1 - x * x, 1 + x)) {
        printf("Да\n");
    }
    else {
        printf("Нет\n");
    }
    return 0;
}