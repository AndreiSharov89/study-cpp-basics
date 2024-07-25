#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    ofstream out("test.txt", ios::out | ios::binary);
    if (!out) {
        cout << "Файл открыть невозможно\n";
        return 1;
    }
    cout << "Enter your poem here:\n";

    string line;
    while (true) {
        getline(cin, line);
        if (line.empty()) {
            break;
        }
        out << line << endl; // Записываем строку в файл
    }

    out.close(); // Закрываем файл
    cout << "Poem saved to file test.txt" << endl;

    return 0;
}
