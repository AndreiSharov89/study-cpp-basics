/*
C:\Users\sharo\OneDrive\Рабочий стол\12- Программирование C++\Projects\5-c4-params\x64\Debug>5-c4-params.exe -a 12 45
Текущая кодовая страница: 1251
Сумма: 57

C:\Users\sharo\OneDrive\Рабочий стол\12- Программирование C++\Projects\5-c4-params\x64\Debug>5-c4-params.exe -m 12 45
Текущая кодовая страница: 1251
Произведение: 540
*/
#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[]) {

    system("chcp 1251");

    // Проверка количества параметров
    if (argc < 4) {
        cout << "Недостаточное количество параметров" << endl;
        return 1;
    }

    // Проверка формата второго параметра
    if (strncmp(argv[1], "-a", 2) != 0 && strncmp(argv[1], "-m", 2) != 0) {
        cout << "Неверный формат второго параметра" << endl;
        return 1;
    }

    // Получение первого и второго аргументов в виде целых чисел
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    // Выполнение операции в зависимости от флага
    if (strncmp(argv[1], "-a", 2) == 0) {
        cout << "Сумма: " << num1 + num2 << endl;
    }
    else {
        cout << "Произведение: " << num1 * num2 << endl;
    }

    return 0;
}
