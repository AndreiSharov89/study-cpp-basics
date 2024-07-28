/* time.cpp */
#include <string>
#include "time.h"

Time::Time() : h(0), min(0), sec(0) {};

Time::Time(int hh, int mm, int ss) {
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
    Time::min = mm;
    Time::sec = ss;
}
void Time::printTime() const {
    std::cout << Time::h << ":" << Time::min << ":" << Time::sec << std::endl;
}

Time Time::sumTime(const Time& other) const {
    int ss = sec + other.sec;
    int mm = min + other.min;
    int hh = h + other.h;

    return Time(hh, mm, ss);
}
