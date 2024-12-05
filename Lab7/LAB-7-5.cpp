#include <iostream>
#include <cmath>
using namespace std;

class Box {
private:
    double a, b;
public:
    // Конструктор по умолчанию
    Box() : a(0), b(0) {}

    // Конструктор с параметрами
    Box(double a, double b) : a(a), b(b) {}

    double diagonal() const {
        return sqrt(a * a + b * b);
    }

    double perimeter() const {
        return 2 * (a + b);
    }
    double square() const {
        return a * b;
    }
    bool isQuad() const {
        return a == b;
    }
    void info() const {
        cout << "Стороны: a = " << a << ", b = " << b << endl;
        cout << "Диагональ: " << diagonal() << endl;
        cout << "Периметр: " << perimeter() << endl;
        cout << "Площадь: " << square() << endl;
        cout << "Квадрат: " << (isQuad() ? "Да" : "Нет") << endl;
    }
};

int main() {
	setlocale (LC_ALL, "Russian");
    int N;
    cout << "Введите количество прямоугольников: ";
    cin >> N;
    double totalSquare = 0;
    Box* rects = new Box[N];
    double* squares = new double[N]; // Объявление массива squares

    for (int i = 0; i < N; ++i) {
        double a, b;
        cout << "Введите длины сторон a и b для прямоугольника " << i + 1 << ": ";
        cin >> a >> b;
        rects[i] = Box(a, b);
        squares[i] = rects[i].square();
        totalSquare += squares[i];
    }

    double avgSquare = totalSquare / N;
    int countAboveAverage = 0;

    for (int i = 0; i < N; ++i) {
        if (squares[i] > avgSquare) {
            ++countAboveAverage;
            rects[i].info(); // Теперь вызываем метод info для каждого объекта Box
        }
    }

    cout << "Количество прямоугольников с площадью больше средней: " << countAboveAverage << endl;

    delete[] squares; // Освобождение памяти для массива squares
    delete[] rects; // Освобождение памяти для массива rects
    return 0;
}




