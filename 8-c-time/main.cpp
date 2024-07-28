#include <windows.h>
#include "time.h"

using namespace std;

int main()
{
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);

        Time time1(12, 1313, 1414);
        time1.printTime();

        Time time2 = Time(15, 1616, 1717);
        time2.printTime();

        Time time3;
        time3 = time1.sumTime(time2);
        time3.printTime();
}
