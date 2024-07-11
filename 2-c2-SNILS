#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    cout << "Enter SNILS number: \n";
    long long a;
    long c;
    int controlNum, sum;
    bool result = false;
    cin >> a;
    controlNum = a % 100;
    c = a / 100;
    sum = 0;
    if (c > 100000000 && c <= 999999999) {
        for (int i = 1; i < 10; i++) {
            //cout << "\n C: " << c;
            int j = (c % (int)pow(10, i)) / (int)pow(10, i-1);
            //cout << "\n J: " << j;
            sum = sum + j * i;
            //cout << "\n Summ: " << sum;
        }
        cout << "\n SNILS: " << a << " Control number: " << controlNum;
        cout << "\n Summ1: " << sum;
        if (sum < 100 && sum == controlNum) {
            result = true;
        }
        else if ((sum == 100 || sum == 101) && controlNum == 0) {
            result = true;
        }
        else {
            sum = sum % 101;
            cout << "\n Summ2: " << sum;
            if (sum < 100 && sum == controlNum) {
                result = true;
            };
            if (sum == 100 && controlNum == 0) {
                result = true;
            }
        };

    };
    cout << "\n" << boolalpha << result;
}
