// Online C++ compiler to run C++ program online

#include<iostream>
#include<iostream>
void IsSymmetrical(int m1, int m3);
using namespace std;
 main()
{
cout<<"Enter a three-digit number: ";
int n,m,m1,m2,t;
cin>> n;
m=n%10;
m1=(n/10)%10;
m2=(n/100)%10;
IsSymmetrical(m,m2);
}
void IsSymmetrical(int m1, int m3)
{
if (m1==m3)
{
cout<< "The number is symmetrical.";
}
if(m1!=m3)
{
cout<< "The number is not symmetrical.";
}
}