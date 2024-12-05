#include <iostream>
#include <cmath>
using namespace std;

class treygolnik {
private:
    double a, b, c;
    double angle(double side1, double side2, double oppositeSide) {
        return acos((side1 * side1 + side2 * side2 - oppositeSide * oppositeSide) / (2 * side1 * side2));
    }
public:
    treygolnik(double sideA = 0, double sideB = 0, double sideC = 0) : a(sideA), b(sideB), c(sideC) {}
    ~treygolnik() {}
    bool truetreyg() {
        return (a + b > c) && (a + c > b) && (b + c > a);
    }
    double perimeter() {
        return a + b + c;
    }
    double square() {
        double s = perimeter() / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    bool ravnobedr() {
        return (a == b) || (a == c) || (b == c);
    }
    void info() {
        cout << "Стороны треугольника: a = " << a << ", b = " << b << ", c = " << c << endl;
        cout << "Периметр треугольника: " << perimeter() << endl;
        cout << "Площадь треугольника: " << square() << endl;
        double angle1 = angle(b, c, a);
        double angle2 = angle(a, c, b);
        double angle3 = angle(a, b, c);
        cout << "Углы треугольника (в градусах): " << angle1 * (180 / M_PI) << ", "
             << angle2 * (180 / M_PI) << ", " << angle3 * (180 / M_PI) << endl;
    }
};
int main() {
    setlocale(LC_ALL, "Russian");
    int K;
    cout << "Введите количество треугольников: ";
    cin >> K;
    treygolnik* treygolniki = new treygolnik[K];
    double sideA, sideB, sideC, totalsquare = 0;
    int truetreygs = 0;
    for (int i = 0; i < K; ++i) {
        cout << "Введите длины сторон треугольника " << i + 1 << ": ";
        cin >> sideA >> sideB >> sideC;
        treygolnik t(sideA, sideB, sideC);
        if (t.truetreyg()) {
            treygolniki[truetreygs++] = t;
            totalsquare += t.square();
            t.info(); 
        } else {
            cout << "Треугольник не существует." << endl;
        }
    }
    double averageSquare = truetreygs > 0 ? totalsquare / truetreygs : 0;
    cout << "Средняя площадь треугольников: " << averageSquare << endl;
    delete[] treygolniki;
    return 0;
}

