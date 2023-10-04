#include<iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"Enter the base number: ";
int n;
float n1;
cin>>n;
cout<<"Enter the exponenet: ";
cin>> n1;

cout<<n <<" raised to the power "<< n1<<" is: "<<pow(n,n1);
return 0;
}