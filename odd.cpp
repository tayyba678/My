#include<iostream>
using namespace std;
void OddishOrEvenish(int nu);
main()
{
cout<<"Enter the five-digit number: ";
int n,m,m1,m2,m3,m4,t;
cin>> n;
m=n%10;
m1=(n/10)%10;
m2=(n/100)%10;
m3=(n/1000)%10;
m4=(n/10000)%10;
t=m+m1+m2+m3+m4;
OddishOrEvenish(t);
}
void OddishOrEvenish(int nu)
{
if(nu%2==0)
{
cout<<"Evenish";
}
if(nu%2==1)
{
cout<<"Oddish";
}

}






