#include <iostream>
#include <cmath>

using namespace std;

double Space(double);
double Space(double, double, double);

int main()
{
    int sides;
    double a, b, c;
    cout << "Choose sides [1|3]\n";
    cin >> sides;
    switch (sides) {
    case 1:
        cout << "Input side: " << endl;
        cin >> a;
        cout << Space(a);
        return 0;
    case 3:
        cout << "Input side1: " << endl;
        cin >> a;
        cout << "Input side2: " << endl;
        cin >> b;
        cout << "Input side2: " << endl;
        cin >> c;
        cout << Space(a, b, c);
        return 0;
    }
}

double Space(double a) {
    return sqrt(1.5 * a * 0.5 * a * 0.5 * a * 0.5 * a);
}
double Space(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
