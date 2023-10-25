#include<iostream>
using namespace std;
void plant(string seed, int water, int fert, int temp);
main()
{
    string s;
    int w, f, t;
    cout<<"Enter seed: ";
    cin>> s;
      cout<<"Enter water: ";
    cin>> w;
  cout<<"Enter fert: ";
    cin>> f;
      cout<<"Enter temp: ";
    cin>> t;
    plant(s, w, f, t);
    }
    void plant(string seed, int water, int fert, int temp)
    {
        int i=1;
        string c=seed;
        while(i<=water)
        {
         cout<<"-";
            i++;
        }
        
   if(!(temp>=20&&temp<=30))
        {

            cout<<c;
        }        
        while(i<=fert)
        {
           cout<<"seed";
            i++;
        }
        
    }