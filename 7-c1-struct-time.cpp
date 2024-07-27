#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;

    void ShowTime()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    int ShowSeconds()
    {
        int sec = hours * 3600 + minutes * 60 + seconds;
        return sec;
    }
};

Time InputTime3()
{
    Time t;
    cout << "\nВведите часы: ";
    cin >> t.hours;
    cout << "\nВведите минуты: ";
    cin >> t.minutes;
    cout << "\nВведите секунды: ";
    cin >> t.seconds;
    return t;
}
Time InputTime1()
{
    Time t;
    cout << "\nВведите время в формате hh mm ss: ";
    cin >> t.hours >> t.minutes >> t.seconds;
    return t;
}

Time sumTime(Time t1, Time t2)
{
    Time t;
    t.seconds = (t1.seconds + t2.seconds) % 60;
    t.minutes = ((t1.minutes + t2.minutes) + (t1.seconds + t2.seconds) / 60) % 60;
    t.hours = t1.hours + t2.hours + (t1.seconds + t2.seconds) / 60;
    return t;
}

Time minusTime(Time t1, Time t2)
{
    Time t;
    if (t1.ShowSeconds() > t2.ShowSeconds())
    {
        if ((t1.seconds - t2.seconds) < 0)
        {
            t.seconds = t1.seconds - t2.seconds + 60;
            t1.minutes--;
        }
        else
            t.seconds = t1.seconds - t2.seconds;

        if ((t1.minutes - t2.minutes) < 0)
        {
            t.minutes = t1.minutes - t2.minutes + 60;
            t1.hours--;
        }
        else
            t.minutes = t1.minutes - t2.minutes;

        t.hours = t1.hours - t2.hours;
    }
    else
    {
        if ((t2.seconds - t1.seconds) < 0)
        {
            t.seconds = t2.seconds - t1.seconds + 60;
            t2.minutes--;
        }
        else
            t.seconds = t2.seconds - t1.seconds;

        if ((t2.minutes - t1.minutes) < 0)
        {
            t.minutes = t2.minutes - t1.minutes + 60;
            t2.hours--;
        }
        else
            t.minutes = t2.minutes - t1.minutes;

        t.hours = t2.hours - t1.hours;
    }
    return t;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Time t1 = InputTime3();
    Time t2 = InputTime1();

    t1.ShowTime();
    t2.ShowTime();

    Time tSum = sumTime(t1, t2);
    tSum.ShowTime();

    Time tDif = minusTime(t1, t2);
    tDif.ShowTime();
}
