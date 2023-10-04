#include<iostream>
#include <cmath>
using namespace std;
float min(float number1, float number2);

main()
{
    cout<<"Enter the first number: ";
    float n1,n2,res;
    cin>> n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    res=min(n1, n2);
    cout<< "The minimum of "<<n1 <<"and " <<n2 <<"is: "<<res;

}
float min(float number1, float number2)
{
    if(number1<number2)
{
cout<<number1;
return 0;
}

 if(number1>number2)
{
cout<<number2;
return 0;
}    
}