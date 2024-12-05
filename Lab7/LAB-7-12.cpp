#include <iostream>
#include <cmath>

using namespace std;

class Treyg {
private:
double x1, y1;
double x2, y2;
double x3, y3;
public:
Treyg(double _x1, double _y1, double _x2, double _y2, double _x3, double _y3) {
x1 = _x1;
y1 = _y1;
x2 = _x2;
y2 = _y2;
x3 = _x3;
y3 = _y3;
}
~Treyg() {}
double distance(double x1, double y1, double x2, double y2) {
return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
bool TrueTreyg() {
double a = distance(x1, y1, x2, y2);
double b = distance(x2, y2, x3, y3);
double c = distance(x3, y3, x1, y1);
return (a + b > c) && (a + c > b) && (b + c > a);
}
double perimeter() {
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    return a + b + c;
}
double square() {
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
bool ravnobedr() {
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    return (a == b) || (b == c) || (c == a);
}
void Info() {
    cout << "Координаты точек: (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << "), (" << x3 << ", " << y3 << ")" << endl;
    cout << "Длина сторон:";
    cout << distance(x1, y1, x2, y2) << ", " << distance(x2, y2, x3, y3) << ", " << distance(x3, y3, x1, y1) << endl;
    cout << "Периметр: " << perimeter() << endl;
    cout << "Площадь: " << square() << endl;
    if(ravnobedr()) {
        cout << "Это равнобедренный треугольник." << endl;
    } 
    else 
    {
        cout << "Это не равнобедренный треугольник." << endl;
    }
}
};

int main() {
setlocale (LC_ALL, "Russian");
int N;
cout << "Введите количество треугольников: ";
cin >> N;
Treyg* Treygs[N];
for(int i = 0; i < N; i++) {
double x1, y1, x2, y2, x3, y3;
cout << "Введите координаты точек треугольника " << i+1 << ": ";
cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
Treygs[i] = new Treyg(x1, y1, x2, y2, x3, y3);
}
double minSquare = Treygs[0]->square();
double maxSquare = Treygs[0]->square();
int min = 0;
int max = 0;
for (int i = 1; i < N; i++) {
if (Treygs[i]->square() < minSquare) {
minSquare = Treygs[i]->square();
min = i;
}
if (Treygs[i]->square() > maxSquare) {
maxSquare = Treygs[i]->square();
max = i;
}
}
cout << "Треугольник с минимальной площадью:" << endl;
    Treygs[min]->Info();
    cout << "Треугольник с максимальной площадью:" << endl;
    Treygs[max]->Info();
    for(int i = 0; i < N; i++) {
        delete Treygs[i];
    }
    return 0;
}
