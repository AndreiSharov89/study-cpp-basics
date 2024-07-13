#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    cout << "No additional tasks, did it on C# course, aim type 1" << endl;
    int result = 0;
    int count = 0;
    string grade;
    while (result < 50) {
        count++;
        double x, y, r;
        cout << "shoot number: " << count << endl;
        cout << "shoot: "; cin >> x >> y;
        //cout << "shoot y: "; cin >> y;
        r = sqrt(x * x + y * y);
        if (r <= 1) {
            cout << "10" << endl;
            result += 10;
        }
        else if (r <= 2) {
            cout << "5" << endl;
            result += 5;
        }
    };
    if (count == 5) {
        grade = "sniper";
    }
    else if (count < 10) {
        grade = "regular";
    }
    else {
        grade = "newbie";
    };
    cout << "\tResult \tShoots \tGrade" << endl;
    cout << "\t" << result << "\t" << count << "\t" << grade << endl;
}
