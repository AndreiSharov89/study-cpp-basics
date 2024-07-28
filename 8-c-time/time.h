/*time.h*/
#pragma once
#include <iostream>

using namespace std;

class Time {
public:
	Time();
	Time(int, int, int);
	void printTime() const;
	Time sumTime(const Time&) const;
private:
	int sec;
	int min;
	int h;
};
