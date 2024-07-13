#include <iostream>
#include <string>
using namespace std;

void dec(const int a, string & snum) {
if (a % 2 == 0)
snum = "0" + snum;
	else snum = "1" + snum;
if ((a / 2) != 0) dec(a / 2, snum);
	else return;
}

int main() {
	int a;
	string snum;
	cout << "Vvedite chislo: ";
	cin >> a;
	dec(a, snum);
	cout << snum << endl;
}
