#include <iostream>
using namespace std;
int totalDigits(int num);
main()
{
    int nu, t;
    cout << "Enter a number: ";
    cin >> nu;
    t = totalDigits(nu);
    cout << "Total number of digits: "<<t;
}
int totalDigits(int num)
{
    if (num == 0)
        return 1;
    int nu = 0;
    while (num != 0)
    {
        num = num / 10;
        ++nu;
    }
    return nu;
}
