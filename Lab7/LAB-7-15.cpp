#include <iostream>
#include <cmath>

using namespace std;

class Treyg {
private:
    double side1, side2, side3;
public:
    Treyg(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    ~Treyg() {}
    bool check() {
        return (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
    }
    bool ravnoside() {
        return (side1 == side2) && (side2 == side3);
    }
    double Perimeter() {
        return side1 + side2 + side3;
    }
    double Square() {
        double s = Perimeter() / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    void Info() {
        cout << "Стороны треугольника: " << side1 << ", " << side2 << ", " << side3 << endl;
        if (ravnoside()) {
            cout << "Треугольник равносторонний." << endl;
        }
        cout << "Периметр треугольника: " << Perimeter() << endl;
        cout << "Площадь треугольника: " << Square() << endl;
    }
};
int main() {
	setlocale (LC_ALL, "Russian");
    int N;
    cout << "Введите количество треугольников: ";
    cin >> N;
    double minPerimeter = 1e308;
    double Square1 = 0;
    int count = 0;
    for (int i = 0; i < N; ++i) {
        double s1, s2, s3;
        cout << "Введите длины сторон треугольника " << i + 1 << ": ";
        cin >> s1 >> s2 >> s3;
        Treyg treyg(s1, s2, s3);
        if (treyg.check()) {
            treyg.Info();
            double perimeter = treyg.Perimeter();
            if (perimeter < minPerimeter) {
                minPerimeter = perimeter;
            }
            Square1 += treyg.Square();
            ++count;
        } else {
            cout << "Треугольник с такими сторонами не существует." << endl;
        }
    }
    double avgSquare = (count > 0) ? (Square1 / count) : 0;
    cout << "Средняя площадь треугольников: " << avgSquare << endl;
    cout << "Минимальный периметр среди треугольников: " << minPerimeter << endl;
    return 0;
}
