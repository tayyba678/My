#include<iostream>
using namespace std;
void primeNumbers(int n);
main()
{
    int n;
    cout<<"Enter a number: ";
    cin>> n;
    primeNumbers(n);
}
void primeNumbers(int n)
{
    if(n==2)
    {
        cout<<n;
    }
    if(n>2)
    {
    int i=3;
    while(i%2==1)
    {
        cout<<i<<", ";
        i++;
    }
}
}