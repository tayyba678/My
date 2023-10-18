#include <iostream>
using namespace std;
int digitSum(int number);
main()
{
    int nu, t;
    cout << "Enter a number: ";
    cin >> nu;
    t = digitSum(nu);
    cout << t;
}
int digitSum(int number)
{
    int n1, n2, a, sum = 0;
    if (number == 0)
    {
        return 0;
    }
    int nu = 0;
    while (number != 0)

    {
        number = number / 10;
    }
    ++nu;

    if (nu == 1)
    {

        a = number;
    }

    if (number != 0 && nu == 2)
    {
        n1 = number / 10;
        n2 = number % 10;
        sum = n1 + n2;
        a = sum;
    }
    return a;
}
