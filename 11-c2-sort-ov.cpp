#include <iostream>
#include <windows.h>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

class Point {
public:
    Point(int x, int y) : x(x), y(y) {}

    double dist() const {
        return sqrt(x * x + y * y);
    }

    friend ostream& operator<<(ostream& os, const Point& point);
    friend bool operator<(const Point& p1, const Point& p2);

private:
    int x, y;
};

ostream& operator<<(ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

bool operator<(const Point& p1, const Point& p2) {
    return p1.dist() < p2.dist();
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));

    sort(v.begin(), v.end());

    for (const auto& point : v) {
        cout << point << '\n';
    }

    return 0;
}
