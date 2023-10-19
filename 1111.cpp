#include<iostream>
using namespace std;
int calculatePrice(int money, int year);
main()
{
    int m,y,g;
cout<<"Enter money: ";
cin>>m;
cout<<"Enter Year: ";
cin>> y;
g=calculatePrice(m,y);
cout<<"Yes! He will live a carefree life and will have "<<g<< " dollars left";
cout<<"He will need "<<g<<" dollars to survive";
}
int calculatePrice(int money, int year)
{int t;
if(year%2==0)
{
    t=money-12000;
}
if(year%2==1)
{
    int f=year-1800;
int a=money-12000;
t=+50*(f+18);
}
if(t<=0)
{
return t;
}
if(t>0)
{
    return t;
}

}
