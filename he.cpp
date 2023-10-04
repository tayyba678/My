#include<iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"Enter the distance from the base of the tree (in feet): ";
int df,ed;
cin>> df;
cout<<"Enter the angle of elevation (in degrees): ";
cin>> ed;
float h,ra;
ra=ed/57.2958;
h=tan(ra)*df;
cout<<"The height of the tree is: "<<h <<" feet";
return 0;
} 