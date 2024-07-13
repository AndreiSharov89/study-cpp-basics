#include <iostream>
using namespace std;

bool isPrime(int a) {
    if (a < 2) return false;
    if (a == 2) return true;
    if (a % 2 == 0) return false;
    for (int i = 3; (i * i) <= a; i += 2) {
        if (a % i == 0) return false;
    }
    return true;
};
int primeNumber(int a) {
    int result = 1;
    for (int i = 1; i < a; i++) {
        if (isPrime(i)) {
            result++;
        }
    }
    return result;
}

int main()
{
    int n;
    cout << "Example 7 - prime, 8 - not prime, 353 - super-prime\n";
    cout << "Enter number to check:\n";
    cin >> n;
    if (isPrime(n)){
        cout << "Number is prime\n";
        int m = primeNumber(n);
        if (isPrime(m)) {
            cout << "Number is super-prime\n";
            cout << "Position " << m << "\n";
        }
        else {
            cout << "...but not super-prime\n";
            cout << "Position " << m << "\n";
        };
    }
    else {
        cout << "Number is not prime";
    };
}
