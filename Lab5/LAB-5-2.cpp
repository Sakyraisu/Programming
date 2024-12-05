#include <iostream>
using namespace std;

int Element(int arr[], int size) {
    setlocale(LC_ALL, "Russian");
    int UE = 0;
    for (int i = 0; i < size; i++) {
        bool unikal = true;
        for (int j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                unikal = false;
                break;
            }
        }
        if (unikal) {
            UE++;
        }
    }
    return UE1;
}
int main() {
    const int N = 10;
    int arr[N];
    cout << "Введите " << N << " элементов массива:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int UE = Element(arr, N);
    cout << "Количество уникальных элементов в массиве: " << UE << endl;
    return 0;
}