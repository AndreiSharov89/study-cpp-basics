#include <iostream>
#include <map>
#include <string>
#include <windows.h>

using namespace std;

struct StudentGrade {
    string name;
    char grade;
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    map<string, char> grades;
    
    StudentGrade sg1;
    while (true) {
        cout << "Имя студента (q чтобы выйти): ";
        cin >> sg1.name;

        if (sg1.name == "q") {
            break;
        }

        cout << "Оценка для " << sg1.name << ": ";
        cin >> sg1.grade;

        grades[sg1.name] = sg1.grade;
        cout << "Оценка для " << sg1.name << " - " << sg1.grade << "\n";
    }
    map<string, char>::iterator b = grades.begin(), e = grades.end();
    for (; b != e; ++b)
        cout << "Имя: " << b->first << "; Оценка: " << b->second << endl;

    return 0;
}
