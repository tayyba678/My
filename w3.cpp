#include<iostream>
using namespace std;
void amplify(int n);
main()
{
    cout<<"Enter the numbers to Amplify: ";
    int nu;
    cin>> nu;
    amplify(nu);
    }
    void amplify(int n)
    {
        for(int i=1;i<=n;i++)
        {
              if(i%4==0)
            {
                cout<<i*10<<" ";
            }
        if(i%4!=0)
        {
            cout<<i<<" ";
        }
    }
    }