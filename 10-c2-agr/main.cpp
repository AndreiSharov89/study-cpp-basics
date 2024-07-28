#include <iostream>
#include <windows.h>
#include "triangle.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Dot* pDot1 = new Dot(0, 0);
    Dot* pDot2 = new Dot(3, 0);
    Dot* pDot3 = new Dot(0, 4);

    Triangle Triangle(pDot1, pDot2, pDot3);
    Triangle.printSides();
    cout << "Периметр: " << Triangle.perimeter() << endl;
    cout << "Площадь: " << Triangle.area() << endl;

    delete pDot1;
    delete pDot2;
    delete pDot3;

    return 0;
}

