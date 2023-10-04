#include<iostream>
using namespace std;
void checkAlphabetcase(char c);
main()
{
cout<<"Enter a character (A/a): ";
char m;
cin>> m;
checkAlphabetcase(m);
}

void checkAlphabetcase(char c)
{
{
if(c=='a')
cout<<"You have entered small "<<c;

}
{
if(c=='A')
cout<<"You have entered Capital "<<c;

}
}