 #include<iostream>
void IsSymmetrical(int m1,int m2, int m3, int m4);
using namespace std;
 main()
{
cout<<"Enter the five-digit number: ";
int n,m,m1,m2,m3,m4,t;
cin>> n;
m=n%10;
m1=(n/10)%10;
m2=(n/100)%10;
m3=(n/1000)%10;
m4=(n/10000)%10;
IsSymmetrical(m1,m2,m3,m4);
}
void IsSymmetrical(int m1,int m2, int m3, int m4)
{
if (m1==m4&&m2==m3)
{
cout<< "true";
}
if(m1!=m4&&m2==m3)
{
cout<< "false";
}
if(m1==m4&&m2!=m3)
{
cout<< "false";
}
if(m1!=m4&&m2!=m3)
{
cout<< "false";
}
}