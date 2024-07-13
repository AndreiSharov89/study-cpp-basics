#include <iostream>
#include <cmath>
using namespace std;

double IterCubeRoot(double a);


int main()
{
    double a;
    cout << "Enter number\n";
    cin >> a;
    cout << "Cube root= " << pow(a, 1.0 / 3) << endl;
    cout << "Or maybe " << IterCubeRoot(a);
}

double IterCubeRoot(double a) {
    double xi, xi1;
    xi = a;
    do {
        xi1 = xi;
        xi = (1.0 / 3) * ((2 * xi1) + a / (xi1 * xi1));
        cout << xi1 << endl;
    } while (abs(xi1 - xi) > 0.00001);
    return xi;
}
