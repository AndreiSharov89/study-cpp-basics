#include <iostream>
#include <windows.h>

using namespace std;

template <class T>
T average(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / static_cast<T>(size);
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int arr1[] = { 1, 2, 3, 4, 5 };
    long arr2[] = { 1L, 2L, 3L, 4L, 5L, 6L, 7L, 8L, 9L, 10L };
    double arr3[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    char arr4[] = "Hello, world!";

    int k1 = sizeof(arr1) / sizeof(arr1[0]);
    int k2 = sizeof(arr2) / sizeof(arr2[0]);
    int k3 = sizeof(arr3) / sizeof(arr3[0]);
    int k4 = sizeof(arr4) / sizeof(arr4[0]) - 1;

    cout << "Average of int array: " << average(arr1, k1) << endl;
    cout << "Average of long array: " << average(arr2, k2) << endl;
    cout << "Average of double array: " << average(arr3, k3) << endl;
    cout << "Average of char array: " << average(arr4, k4) << endl;

    return 0;
}
/*
Average of int array: 3
Average of long array: 5
Average of double array: 3
Average of char array: ч
*/
