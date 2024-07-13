#include <iostream>

using namespace std;

int Input(int &a, int &b);

int main()
{
	int a, b;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		cerr << "error, start with a, then b";
		return 1;
	}
	int s = a + b;
	return 0;
}
int Input(int &a, int &b) {
	cout << "Vvedite otrezok [a..b]" << endl;
	cout << "a= " << endl;
	cin >> a;
	cout << "b= " << endl;
	cin >> b;
	if (a > b) return 0;
	a = a * 2;
	b = b * 2;
	return 1;
}
