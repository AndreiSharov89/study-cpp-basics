#include <iostream>
#include <windows.h>

using namespace std;

class Time {
private:
    int sec;
    int mins;
    int h;
public:
    Time() : h(0), mins(0), sec(0) {};
    Time(int hh, int mm, int ss) {
        while (ss >= 60) {
            mm++;
            ss -= 60;
        }
        while (mm >= 60) {
            hh++;
            mm -= 60;
        }
        if (hh >= 24) {
            hh %= 24;
        }

        Time::h = hh;
        Time::mins = mm;
        Time::sec = ss;
    }
    void printTime() const {
        std::cout << Time::h << ":" << Time::mins << ":" << Time::sec << std::endl;
    }
    Time sumTime(const Time& other) const {
        int ss = sec + other.sec;
        int mm = mins + other.mins;
        int hh = h + other.h;

        return Time(hh, mm, ss);
    }
    Time operator+(const Time& other) const {
        Time result(*this);
        result.sec += other.sec;
        result.mins += other.mins;
        result.h += other.h;

        result.normalize();

        return result;
    }
    Time operator+(double secs) const {
        Time result(*this);
        result.sec += static_cast<int>(secs);
        result.normalize();
        return result;
    }

    friend Time operator+(double secs, const Time& time);

    Time operator-(const Time& other) const {
        Time result(*this);
        if (((result.h * 24 + result.mins) * 60 + result.sec) >= ((other.h * 24 + other.mins) * 60 + other.sec)) {
            result.sec -= other.sec;
            result.mins -= other.mins;
            result.h -= other.h;
        }
        else {
            result.sec = other.sec - result.sec;
            result.mins = other.mins - result.mins;
            result.h = other.h - result.h;
        }
        result.normalize();
        return result;
    }
    bool operator<(const Time& other) const {
        if (h < other.h) return true;
        if (h > other.h) return false;
        if (mins < other.mins) return true;
        if (mins > other.mins) return false;
        return sec < other.sec;
    }

    bool operator>(const Time& other) const {
        return other < *this;
    }

    bool operator<=(const Time& other) const {
        return !(*this > other);
    }

    bool operator>=(const Time& other) const {
        return !(*this < other);
    }

    bool operator==(const Time& other) const {
        return h == other.h && mins == other.mins && sec == other.sec;
    }

    bool operator!=(const Time& other) const {
        return !(*this == other);
    }
private:
    void normalize() {
        if (sec >= 60) {
            mins += sec / 60;
            sec %= 60;
        }

        if (mins >= 60) {
            h += mins / 60;
            mins %= 60;
        }

        if (h >= 24) {
            h %= 24;
        }
    }
};

Time operator+(double secs, const Time& time) {
    return Time(time) + secs;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Time time1(12, 131, 141);
    time1.printTime();

    Time time2 = Time(15, 161, 171);
    time2.printTime();

    Time time3, time4, time5, time6;
    time3 = time1 + time2;
    time4 = time1 - time2;
    time5 = time1 + 1.2;
    time6 = 1.2 + time2;
    time3.printTime();
    time4.printTime();
    time5.printTime();
    time6.printTime();
    cout << "time1 < time2: " << (time1 < time2) << endl;
    cout << "time1 > time2: " << (time1 > time2) << endl;
    cout << "time1 == time2: " << (time1 == time2) << endl;
    return 0;
}
