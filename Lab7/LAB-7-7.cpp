#include <iostream>
#include <cmath>

using namespace std;

class Treyg {
private:
double a, b, c; 
public:
Treyg(double sideA, double sideB, double sideC) {
a = sideA;
b = sideB;
c = sideC;
}
~Treyg() {}
double Perimeter() {
    return a + b + c;
}
double square() {
    double p = Perimeter() / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
void Info() {
    cout << "Стороны прямоугольного треугольника: " << a << ", " << b << ", " << c << endl;
    cout << "Периметр: " << Perimeter() << endl;
    cout << "Площадь: " << square() << endl;
    if (a == b || b == c || a == c) {
        cout << "Прямоугольный треугольник равнобедренный." << endl;
    } else {
        cout << "Прямоугольный треугольник не равнобедренный" << endl;
    }
}
};
int main() {
setlocale (LC_ALL, "Russian");
int n;
cout << "Введите количество прямоугольных треугольников: ";
cin >> n;
double squares = 0;
Treyg** Treygs = new Treyg*[n];
for (int i = 0; i < n; i++) {
    double sideA, sideB, sideC;
    cout << "Введите стороны треугольника " << i + 1 << ": ";
    cin >> sideA >> sideB >> sideC;
    Treygs[i] = new Treyg(sideA, sideB, sideC);
    squares += Treygs[i]->square();
}
double avgsquare = squares / n;
int count = 0;
for (int i = 0; i < n; i++) {
    if (Treygs[i]->square() < avgsquare) {
        count++;
    }
    cout << "Треугольник " << i + 1 << ":" << endl;
    Treygs[i]->Info();
}
cout << "Количество треугольников, площадь которых меньше средней площади: " << count << endl;
for (int i = 0; i < n; i++) {
    delete Treygs[i];
}
delete[] Treygs;
return 0;
}