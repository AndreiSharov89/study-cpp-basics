#include <iostream>
#include <vector>

using namespace std;

template <class T>
void Print(const T& container, const string& separator) {
    bool firstElem = true;
    for (const auto& element : container) {
        if (!firstElem) {
            cout << separator;
        }
        cout << element;
        firstElem = false;
    }
    cout << separator << endl;
}

int main() {
    vector<int> data = { 1, 2, 3 };
    Print(data, "\' ");
    return 0;
}
