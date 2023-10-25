#include<iostream>
using namespace std;
int calculateDamage(string type, string opponentType, int attackPower, int opponenetdefense);
main()
{
    string t,op;
    int a,d,dam;
cout<< "Enter your type: ";
cin>>t;
cout<<"Enter your opponent's type: ";
cin>> op;
cout<<"Enter your attack power: ";
cin>> a;
cout<<"Enter your opponent's defense: ";
cin>> d;
dam=calculateDamage(t,op,a,d);
cout<<dam;
}
int calculateDamage(string type, string opponentType, int attackPower, int opponenetdefense)
{
    int effectiveness;
    int damage;
    if(type=="water"&&opponentType=="grass")
            {
damage = 50 * (attackPower / opponenetdefense) ;
effectiveness=0.5*damage;
            }
              if(type=="water"&&opponentType=="fire")
            {
damage = 50 * (attackPower / opponenetdefense) ;
effectiveness=2*damage;
            }
            if(type=="water"&&opponentType=="electric")
            {
damage = 50 * (attackPower / opponenetdefense) ;
effectiveness=0.5*damage;
            }
             if(type=="fire"&&opponentType=="water")
            {
        damage = 50 * (attackPower / opponenetdefense) ;
        effectiveness=0.5*damage;
            }
            if(type=="fire"&&opponentType=="grass")
            {
        damage = 50 * (attackPower / opponenetdefense) ;
        effectiveness=2*damage;
            }
            if(type=="grass"&&opponentType=="fire")
            {
                damage = 50 * (attackPower / opponenetdefense) ;
        effectiveness=0.5*damage;
            }
            if(type=="fire"&&opponentType=="electric")
            {
        damage = 50 * (attackPower / opponenetdefense) ;
        effectiveness=1*damage;
            }
            if(type=="grass"&&opponentType=="electric")
            {
        damage = 50 * (attackPower / opponenetdefense) ;
           effectiveness=1*damage;
            }
            if(type=="electric"&&opponentType=="fire")
            {
            damage = 50 * (attackPower / opponenetdefense);
                 effectiveness=1*damage;
            }
return effectiveness;
}