#include <iostream>
#include "triangle.h"
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Dot dot1(0, 0);
    Dot dot2(3, 0);
    Dot dot3(0, 4);

    Triangle Triangle(dot1, dot2, dot3);
    Triangle.printSides();
    cout << "Периметр: " << Triangle.perimeter() << endl;
    cout << "Площадь: " << Triangle.area() << endl;

    return 0;
}