#include <iostream>
#include <cmath>
int sum(int a);

int main()
{
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    std::cout << "\nThe sum of numbers is: " << sum(n) << std::endl;
    return 0;
}

int sum(int a)
{
    if (a == 0)
        return 0;
    if (a > 0)
        return 5*a + sum(a - 1);
}
