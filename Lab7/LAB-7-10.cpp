#include <iostream>
#include <cmath>

using namespace std;

class Treyg {
private:
    double side1, side2, side3;
public:
    Treyg(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    ~Treyg() {}
    bool ThisTreyg() {
        return (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1);
    }
    double Perimeter() {
        return side1 + side2 + side3;
    }
    double Square() {
        double s = Perimeter() / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    bool PiamTreyg() {
        return (pow(side1, 2) + pow(side2, 2) == pow(side3, 2) ||
                pow(side1, 2) + pow(side3, 2) == pow(side2, 2) ||
                pow(side2, 2) + pow(side3, 2) == pow(side1, 2));
    }
    void Info() {
        cout << "Стороны: " << side1 << ", " << side2 << ", " << side3 << endl;
        cout << "Периметр: " << Perimeter() << endl;
        cout << "Площадь: " << Square() << endl;
        cout << "Прямоугольный треугольник? " << (PiamTreyg() ? "Да":"Нет") << endl;
    }
};
int main() {
	setlocale (LC_ALL, "Russian");
    int M;
    cout << "Введите количество треугольников: ";
    cin >> M;
    double Square1 = 0;
    for (int i = 0; i < M; ++i) {
        double s1, s2, s3;
        cout << "Введите стороны треугольника " << i + 1 << ": ";
        cin >> s1 >> s2 >> s3;
        Treyg treyg(s1, s2, s3);
        if (treyg.ThisTreyg()) {
            Square1 += treyg.Square();
            cout << "Треугольник " << i + 1 << " информация:" << endl;
            treyg.Info();
        } else {
            cout << "Недопустимый треугольник." << endl;
            --i;
        }
    }
    cout << "Средняя площадь " << M << " треугольников: " << Square1 / M << endl;
    return 0;
}