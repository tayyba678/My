#include<iostream>
using namespace std;
void type(char name, float price);
main()
{
    cout<<"Enter the vehicle type code (M, E, S , V, T): ";
    char vehicletype;
    float price;
    cin>> vehicletype;
    cout<<"Enter the price of the vehiccle: $";
    cin>> price;
    type (vehicletype, price);
}
void type(char name, float price)
{
if (name=='M')
{
    float  tax,TA,Fi;
    tax=0.06;
    TA=price*(tax/100);
    Fi=TA+price;
    cout <<"The final price of a vehicle of type "<< name<<" after adding the tax is $"<< TA<<".";


}
if (name=='E')
{
    float  tax,TA,Fi;
    tax=8;
    TA=price*(tax/100);
    Fi=TA+price;

    cout <<"The final price of a vehicle of type "<< name<<" after adding the tax is $"<< Fi<<".";
    

}
if (name=='S')
{
    float  tax,TA,Fi;
    tax=0.1;
    TA=price*(tax/100);
       Fi=TA+price;
    cout <<"The final price of a vehicle of type "<< name<<" after adding the tax is $"<< Fi<<".";
    

}
if (name=='V')
{
    float  tax,TA,Fi;
    tax=12;
    TA=price*(tax/100);
       Fi=TA+price;
    cout <<"The final price of a vehicle of type "<< name<<" after adding the tax is $"<< Fi<<".";
    

}
if (name=='T')
{
    float  tax,TA,Fi;
    tax=15;
    TA=price*(tax/100);
       Fi=TA+price;
    cout <<"The final price of a vehicle of type "<< name<<" after adding the tax is $"<< Fi<<".";
    

}
}