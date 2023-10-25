#include<iostream>
using namespace std;
string doesBrickFit(int height, int width, int depth, int widthh, int heighth );
main()
{
    int hei,wid,dep,widh,heih;
    string b;
    cout<<"Enter the height: ";
    cin>> hei;
    cout<<"Enter the width: ";
    cin>> wid;
    cout<<"Enter the depth: ";
    cin>> dep;
    cout<<"Enter the width hole: ";
    cin>> widh;
    cout<<"Enter the height: ";
    cin>> heih;
    b=doesBrickFit( hei,wid,dep,widh,heih);
    cout<< b;
}
 string doesBrickFit(int height, int width, int depth, int widthh, int heighth)
 {
    string a;
if((height<=heighth&&width<=widthh)||(height<=widthh||width<=heighth))
{
a="true";
}
if((height<=heighth&&depth<=widthh)||(height<=widthh||depth<=heighth))
{
a="true";
}
if((width<=heighth&&depth<=widthh)||(width<=widthh||depth<=heighth))
{
a="true";
}
else
{
a="false";
}
return a;
 }                                                                                                                                                                                                                                                       