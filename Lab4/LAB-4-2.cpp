#include <iostream>
#include <fstream>
using namespace std;

int shetcifr(int num) {
    if (num == 0) {
        return 1; 
    }
    int shet = 0;
    while (num != 0) {
        num /= 10;
        shet++;
    }
    return shet;
}
int main() {
    ifstream inputFile("sequence.txt");
    if (!inputFile.is_open()) {
        cerr << "Ошибка открытия файла\n";
        return 1;
    }
    int odnoznach = 0, dvyznach = 0, trehznach = 0;
    int num;
    while (inputFile >> num) {
        int cifri = shetcifr(num);
        if (cifri == 1) {
            odnoznach++;
        } else if (cifri == 2) {
            dvyznach++;
        } else if (cifri == 3) {
            trehznach++;
        }
    }
    inputFile.close();
    ofstream outputFile("result.txt");
    if (!outputFile.is_open()) {
        cerr << "Ошибка открытия файла для записи\n";
        return 1;
    }
    outputFile << "Количество однозначных чисел: " << odnoznach << endl;
    outputFile << "Количество двузначных чисел: " << dvyznach << endl;
    outputFile << "Количество трехзначных чисел: " << trehznach << endl;
    outputFile.close();
    cout << "Результаты записаны в файл result.txt\n";
    return 0;
}