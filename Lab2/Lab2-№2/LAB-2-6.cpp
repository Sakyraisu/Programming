#include <cstdio>
#include <cmath>

int main() {
    double x, y;
    printf("Введите число x и y: ");
    scanf("%lf %lf", &x, &y);
    if (x >= 0 && 1 <= x * x + y * y && x * x + y * y <= 4) {
        printf("Да\n");
    }
    else {
        printf("Нет\n");
    }
    return 0;
}