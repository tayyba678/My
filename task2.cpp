#include<iostream>
using namespace std;
void desiredOutput(float length, float width, float height, string out );
main()
{
    cout<<"Enter the length of the pyramid (in meters): ";
    float len,wid, hei;
    cin>> len;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>> wid;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>> hei;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    string out;
    cin>> out;
    desiredOutput( len, wid,  hei, out );
}
void desiredOutput(float length, float width, float height, string out )
{
if (out=="millimeters")
{
    float m;
    m=(length*width*height)/3;
    cout<<m<<" cubic "<< out;
}
if (out=="kilometers")
{
    float m,n;
    m=(length*width*height)/3;
    n=m/(1000*1000*1000);
    cout<<n <<" cubic "<< out;

}
if (out=="meters")
{
    float m;
    m=(length*width*height);
    cout<<m <<" cubic "<<out;

}

if (out=="centimeters")
{
    float m,n;
    m=(length*width*height)/3;
    n=m*(1000*1000*1000);
    cout<<m << " cubic "<< out;

}
}