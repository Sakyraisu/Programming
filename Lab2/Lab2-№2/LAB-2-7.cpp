#include <cstdio>
#include <cmath>

int main() {
    double x, y;
    printf("Введите число x и y: ");
    scanf("%lf %lf", &x, &y);
    if (fmax(-0.5 * x, 1.5 * x) - 1 <= y && y <= fmin(0, x) + 2) {
        printf("Да\n");
    }
    else {
        printf("Нет\n");
    }
    return 0;
}