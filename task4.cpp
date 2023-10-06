#include<iostream>
#include<math.h>
using namespace std;
void projectTimeCslculation(float hours, float days, int no);
main(){
    cout<<"Enter the needed hours: ";
    float ho;
    cin>> ho;
    cout<<"Enter the days that the firm has: ";
    float days;
    cin>> days;
     cout<<"Enter the number of all workers: ";
     int num;
     cin>> num;
projectTimeCslculation(ho, days, num);
}
void projectTimeCslculation(float hours, float days, int no)
{
float m,nom;
m=days*9*no;
nom=m-hours;
if(nom<hours)
{
cout<<"Not enough time! "<<abs(nom) <<" hours needed";
}

if(nom>=hours)
{
cout<< "Yes! "<< abs(nom)<< " hours left";



}
}