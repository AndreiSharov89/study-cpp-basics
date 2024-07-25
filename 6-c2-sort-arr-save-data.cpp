#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    //from previous lab
    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    for (int i : a)
        cout << i << '\t';
    int min = 0; // для записи минимального значения
    int buf = 0; // для обмена значениями
    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
    //new part
    ofstream out("test.txt", ios::out | ios::binary);
    if (!out) {
        cout << "Файл открыть невозможно\n";
        return 1;
    }
    out.write((char*)a, sizeof(a));
    cout << endl;
    cout << "writing finished to test.txt" << endl;
    out.close();

    ifstream in("test.txt", ios::in | ios::binary);
    if (!in) {
        cout << "Файл открыть невозможно";
        return 1;
    }
    in.read((char*)&a, sizeof(a));
    int k = sizeof(a) / sizeof(int);
    cout << "reading file test.txt" << endl;
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << '\t';
    }
    in.close();

    return 0;

}
