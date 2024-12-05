#include <iostream>
#include <fstream>
using namespace std;

int shetdelitel(int num) {
    int delitel = 0;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            delitel++;
        }
    }
    return delitel;
}
bool prostie(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    ofstream outputFile("result.txt");
    int num;
    int shetprostie = 0;
    cout << "Введите последовательность целых чисел :\n";
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }

        int delitel = shetdelitel(num);
        outputFile << "Число " << num << " имеет " << delitel << " делителей.\n";

        if (prostie(num)) {
            shetprostie++;
        }
    }
    outputFile << "Общее количество простых чисел в последовательности: " << shetprostie << endl;
    outputFile.close();
    cout << "Результаты записаны в файл result.txt\n";
    return 0;
}