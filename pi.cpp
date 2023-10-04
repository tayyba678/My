#include<iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"Enter the value of a: ";
int a,b,c;
cin>> a;
cout<<"Enter the value of b: ";
cin>> b;
cout<<"Enter the value of c: ";
cin>> c;
float f;
f=b^2-4*a*c;
if(f==0)
{
float r1,r2;
r1=r2=-b/2*a;
cout<<"Solution: x= "<<r1;
}
if(f>0)
{
float r1,r2;
r1=(-b+(b^2-4*a*c)^1/2)/2*a;
r2=(-b-(b^2-4*a*c)^1/2)/2*a;
cout<<"Solutions: x= "<<r1<<" and x= " <<r2; 
}
if(f<0)
{
float r1,r2;
r1=-b/2*a+(-(b)^2-4*a*c)^1/2)/2*a;
r2=-b/2*a-(-(b)^2-4*a*c)^1/2)/2*a;
cout<<"Complex Solutions: x= "<<r1<< "i and x= "<<r2<<"i";
}