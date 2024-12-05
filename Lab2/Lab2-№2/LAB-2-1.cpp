#include <cstdio>
#include <cmath>

int main() {
    double x, y;
    printf("Введите число x и y: ");
    scanf("%lf %lf", &x, &y);
    if (y <= 1 && x <= 1 && -x <= 1) {
        printf("Да\n");
    }
    else {
        printf("Нет\n");
    }
    return 0;
}
