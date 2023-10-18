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
    int n1, n2, n3, n4, n5, n6, a, sum = 0;
    int nn = number;
    if (number == 0)
    {
        return 0;
    }
    int nu = 0;
    while (number != 0)

    {
        number = number / 10;
        ++nu;
    }
    int b = nu;
    if (b == 1)
    {

        a = nn;
    }

    if (b == 2)
    {
        n1 = nn % 10;
        n2 = (nn / 10) % 10;
        sum = n1 + n2;
        a = sum;
    }
    if (b == 3)
    {

        n1 = nn % 10;
        n2 = (nn / 10) % 10;
        n3 = (nn / 100) % 10;
        sum = n1 + n2 + n3;
        a = sum;
    }
    if (b == 4)
    {
        n1 = nn % 10;
        n2 = (nn / 10) % 10;
        n3 = (nn / 100) % 10;
        n4 = (nn / 1000) % 10;
        sum = n1 + n2 + n3 + n4;
        a = sum;
    }
    if (b == 5)
    {
        n1 = nn % 10;
        n2 = (nn / 10) % 10;
        n3 = (nn / 100) % 10;
        n4 = (nn / 1000) % 10;
        n5 = (nn / 10000) % 10;
        sum = n1 + n2 + n3 + n4 + n5;
        a = sum;
    }
    if (b == 6)
    {
        n1 = nn % 10;
        n2 = (nn / 10) % 10;
        n3 = (nn / 100) % 10;
        n4 = (nn / 1000) % 10;
        n5 = (nn / 10000) % 10;
        sum = n1 + n2 + n3 + n4 + n5 + n6;
        a = sum;
    }
    return a;
}
