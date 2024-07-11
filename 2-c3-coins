#include <iostream>

using namespace std;
int main()
{
    unsigned int a;
    int tens = 0, fives = 0, doubles = 0, roubles = 0;
    cout << "Enter amount:\n";
    cin >> a;
    if (a / 10 > 0) {
        tens = a / 10;
        cout << "\n 10 roubles - " << tens << " sht.";
        a = a % 10;
    };
    if (a / 5 > 0) {
        fives = a / 5;
        cout << "\n 5 roubles - " << fives << " sht.";
        a = a % 5;
    };
    if (a / 2 > 0) {
        doubles = a / 2;
        cout << "\n 2 roubles - " << doubles << " sht.";
        a = a % 2;
    };
    if (a / 1 > 0) {
        roubles = a;
        cout << "\n 1 rouble - " << roubles << " sht.";
    };
}
