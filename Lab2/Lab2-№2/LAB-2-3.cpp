#include <cstdio>
#include <cmath>

int main() {
    double x, y;
    printf("Введите число x и y: ");
    scanf("%lf %lf", &x, &y);
    if (fmax(fabs(x), fabs(y)) <= 1 && y >= -fabs(x)) {
        printf("Да\n");
    }
    else {
        printf("Нет\n");
    }
    return 0;
}
