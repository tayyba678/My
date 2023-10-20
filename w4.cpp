#include<iostream>
using namespace std;
int triangle(int n);
main()
{
cout<<"Enter number of Ttriangle: ";
int nu,tri;
cin>> nu;
tri=triangle(nu);
cout<<"Dots in the Triangle: "<<tri;
}
int triangle(int n)
{
    int a,t,i;
for(i=1;i<=n;i=i+a)
{
    a++;
}
t=n+i;
return t;
}