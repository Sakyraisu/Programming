#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    setlocale (LC_ALL, "Russian");
    ifstream file("input.txt");
    if (!file.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    int n;
    file >> n;

    double** tochki = new double*[n];
    for (int i = 0; i < n; i++) {
        tochki[i] = new double[2];
    }

    for (int i = 0; i < n; i++) {
        file >> tochki[i][0] >> tochki[i][1];
    }

    double mdistance = INT32_MAX;
    int tochka1 = -1, tochka2 = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double dx = tochki[j][0] - tochki[i][0];
            double dy = tochki[j][1] - tochki[i][1];
            double distance = sqrt(dx * dx + dy * dy);

            if (distance < mdistance) {
                mdistance = distance;
                tochka1 = i;
                tochka2= j;
            }
        }
    }

    cout << "Координаты двух точек, наиболее близких друг к другу: (" << tochki[tochka1][0] << ", " << tochki[tochka2][1] << ") и (" << tochki[tochka1][0] << ", " << tochki[tochka2][1] << ")" << endl;
    cout << "Расстояние между ними: " << mdistance << endl;

    for (int i = 0; i < n; i++) {
        delete[] tochki[i];
    }
    delete[] tochki;

    file.close();

    return 0;
}
