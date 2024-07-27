#include <iostream>
#include <windows.h>
#include <cmath>
#include <tuple>

using namespace std;

int MyRoots(double a, double b, double c, tuple <int, double, double>& root)
{

    double D = b * b - 4 * a * c;
    if (D > 0)
    {
        get<0>(root) = 1;
        get<1>(root) = (-b - sqrt(D)) / (2 * a);
        get<2>(root) = (-b + sqrt(D)) / (2 * a);
    }
    else if (D == 0)
    {
        get<0>(root) = 0;
        get<1>(root) = (-b ) / (2 * a);
        get<2>(root) = (-b ) / (2 * a);
    }
    else
    {
        get<0>(root) = -1;
    }
    return get<0>(root);
}

void printResult(int flag, double a, double b, double c, tuple <int, double, double> root)
{
    if (get<0>(root) == 1)
    {
        cout << "Корни уравнения: x1 = " << get<1>(root) << ", x2 = " << get<2>(root) << endl;
    }
    else if (get<0>(root) == 0)
    {
        cout << "Корни уравнения: x1 = x2 = " << get<1>(root) << endl;
    }
    else
    {
        cout << "Действительных корней нет" << endl;
    }
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int flag;
    double a, b, c;
    cout << "Введите коэффициенты уравнения ax^2 + bx + c = 0:" << endl;
    cout << "Введите a: "; cin >> a;
    cout << "Введите b: "; cin >> b;
    cout << "Введите c: "; cin >> c;
    tuple <int, double, double> roots;

    flag = MyRoots(a, b, c, roots);
    printResult(flag, a, b, c, roots);
}
