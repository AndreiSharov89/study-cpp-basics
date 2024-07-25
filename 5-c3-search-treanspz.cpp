#include <iostream>

using namespace std;

int SearchTransposition(int arr[], int size, int key) {
    // Если массив пустой, вернуть -1
    if (size == 0 ) {
        return -1;
    }

    // Если первый элемент ключ, вернуть 0
    if (arr[0] == key) {
        return 0;
    }

    // Поиск ключа в массиве
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] == key) {
            // Если ключ найден, поменять местами текущий и предыдущий элементы
            swap(arr[i], arr[i - 1]);
            return i;
        }
    }

    // Если ключ не найден, вернуть -1
    return -1;
}

int main() {
    system("chcp 1251");

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = SearchTransposition(arr, size, 5);
    if (index == -1) {
        cout << "Элемент не найден" << endl;
    }
    else {
        cout << "Элемент найден на позиции: " << index << endl;
        //после транспозиции
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    index = SearchTransposition(arr, size, 4);
    if (index == -1) {
        cout << "Элемент не найден" << endl;
    }
    else {
        cout << "Элемент найден на позиции: " << index << endl;
        //после транспозиции
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    return 0;
}
