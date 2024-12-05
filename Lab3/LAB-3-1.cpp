#include <iostream>
#include <cstdio>

int main() 
{
    FILE *file = fopen("pohod.txt", "r");
    if (file == 0) {
        printf ("Не удалось открыть файл pohod.txt"\n);
        return 1;
    }

    double totalDistance, firstDayDistance;
    fscanf(file, "%lf %lf", &totalDistance, &firstDayDistance);
    fclose(file);
    double currentDistance = firstDayDistance;
    int days = 1;
    while (currentDistance < totalDistance) {
        currentDistance *= 1.15; 
        days++;
    }
    file = fopen("dni.txt", "w");
    if (file == 0) {
        printf ("Не удалось открыть файл dni.txt"\n );
        return 1;
    }
    fprintf(file, "%d", days);
    fclose(file);

    return 0;
}
