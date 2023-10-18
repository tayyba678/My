#include <iostream>
using namespace std;
void generateFibonacci(int length);
main()
{
    int num;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> num;
    generateFibonacci(num);
}
void generateFibonacci(int length)
{
    int n1 = 0, n2 = 1;
    int nu = 3;
    if (length == 1)
    {
        cout << n1;
    }
    if (length >= 2)
    {
        cout << n1 << " " << n2 << " ";
    }
    while (nu <= length)
    {
        int sum = n1 + n2;
        cout << sum << " ";
        n1 = n2;
        n2 = sum;
        nu++;
    }
}
