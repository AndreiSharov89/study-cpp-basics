#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool CheckSnils(string);
bool IsSpaceOrDash(char c)
{
    switch (c)
    {
    case ' ':
    case '-':
        return true;
    default:
        return false;
    }
}

int main()
{
    string inputString;
    //cout << "Enter snils number (digits, spaces, hyphens):\n";
    //cin >> inputString;
    inputString = "a105 - 867 - 867 - 92";
    cout << "\n" << boolalpha << CheckSnils(inputString);
}

bool CheckSnils(string inputString) {

    inputString.erase(std::remove_if(inputString.begin(), inputString.end(), &IsSpaceOrDash), inputString.end());
    long long a;
    try { a = stoll(inputString); }
    catch (invalid_argument) {
        a = 99999999999;
        cout << "wrong symbols";
    };
    long c;
    int controlNum, sum;
    bool result = false;
    controlNum = a % 100;
    c = a / 100;
    sum = 0;
    if (c > 100000000 && c <= 999999999) {
        for (int i = 1; i < 10; i++) {
            //cout << "\n C: " << c;
            int j = (c % (int)pow(10, i)) / (int)pow(10, i - 1);
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
        }
    }
    return result;
};

