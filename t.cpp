#include<iostream>
using namespace std;
void timeTravel(int ho, int mi);
main()
{
cout<<"Enter Hours: ";
int h,m
;
cin>> h;
cout<<"Enter Minutes: ";
cin>> m;
timeTravel(h,m);
}
void timeTravel(int ho, int mi)
{
int add;
add=mi+15;
if(add>59)
{
int l;
l=ho+1;
cout>>l>>":">>add;
}

}
