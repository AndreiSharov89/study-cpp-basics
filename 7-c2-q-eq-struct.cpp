#include <iostream>
#include <windows.h>

using namespace std;

struct QEqSolution {
    double root1;
    double root2;
};

QEqSolution solveQEq(double a, double b, double c) {
    QEqSolution solution;
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        solution.root1 = solution.root2 = 0;
        //так надо по заданию: что-то всё равно вернуть, увы
    }
    else if (discriminant == 0) {
        solution.root1 = solution.root2 = -b / (2 * a);
    }
    else {
        solution.root1 = (-b + sqrt(discriminant)) / (2 * a);
        solution.root2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    return solution;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double a, b, c;
    cout << "Введите коэффициенты уравнения ax^2 + bx + c = 0:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    QEqSolution solution = solveQEq(a, b, c);

    cout << "Корни квадратного уравнения:" << endl;
    cout << "x1 = " << solution.root1 << endl;
    cout << "x2 = " << solution.root2 << endl;

    return 0;
}
