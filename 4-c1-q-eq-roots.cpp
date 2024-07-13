#include <iostream>
#include <cmath>
using namespace std;

int QRoots(double a, double b, double c, double &x1, double &x2) {

    double d = b * b - 4 * a * c;
    //cout << "D= " << d << endl;
    if (d < 0) return -1;
    if (d == 0) { 
        //x1 = ( - 1 * b) / (2 * a);
        cout << "x1= " << x1 << endl;
        return 0;
    };
    if (d > 0) {
        //x1 = (-1 * b + sqrt(d)) / (2 * a);
        cout << "x1= " << x1 << endl;
        //x2 = (-1 * b - sqrt(d)) / (2 * a);
        cout << "x2= " << x2 << endl;
        return 1;
    };
};

int main()
{
    double a, b, c;
    double x1 = 0;
    double x2 = 0;
    cout << "a*x^2 + b*x + c = 0" << endl;
    cout << "Enter a:" << endl;
    cin >> a;
    cout << "Enter b:" << endl;
    cin >> b;
    cout << "Enter c:" << endl;
    cin >> c;
    switch (QRoots(a, b, c, x1, x2)) {
    case -1: 
        cout << "No real roots" << endl;
        break;
    case 0:
        cout << "One real root x1 = x2 = " << x1 << endl;
        break;
    case 1:
        cout << "Two real roots x1= " << x1 << " x2= " << x2 << endl;
        break;
    }
}
