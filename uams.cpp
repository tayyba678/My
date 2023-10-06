#include<iostream>
#include<cmath>
using namespace std;
void printMenu();
void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks);
void compareMarks(string nameStd1,int ecatMarksstd2, string nameStd2,int ecatMarksstd2 );

main()
printMenu();

string name, int matricMarks, int interMarks, int ecatMarks
cin>> name;
cout<<"Name"<< name;
cin>> matricMarks;
cout<<"Matric marks" <<matricMarks; 
cin>> interMarks;
cout<<"Inter marks"<<interMarks ;
cin>>ecatMarks ;
cout<< "Ecat marks"<< ecatMarks;
calculateAggregate(name, matricMarks, interMarks,ecatMarks);

calculateAggregate(name, matricMarks, interMarks,ecatMarks);
compareMarks(name, ecatMarks, name, ecatMarks);

void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks){

float ag,aggr;
ag=(matricMarks/1100)*0.3+(interMarks/550)*0.3+(ecatMarks*0.4);
aggr=ag*100;
}



void compareMarks(string nameStd1,int ecatMarksstd1, string nameStd2,int ecatMarksstd2 )
{
cout<< namestd1 << namestd2 << max(ecatMarksstd1,ecatMarksstd2);
cout <<namestd1 <<namestd2 <<min(ecatMarksstd1,ecatMarksstd2)

}
{
void printMenu()
cout<<"   #   #  ### ###  # #  ###  ##    ## ### ### # #     #  ##  #   # ###  ##  ## ### ##  ###   # #   #   ###   #    ##  ###  # #  ### ### ###     ##  # #   ##  ###  ###  # #"<<endl;
cout<<"   #   #  # #  #   # #  #    # #  #    #   #  # #    # # # # ## ##  #  #   #    # #  # # #   ###  # #  # #  # #  #    #    ###  #   # #  #     #    # #  #     #   #    ###"<<endl;
cout<<"   #   #  # #  #   # #  ##   ##    #   #   #   #     ### # # # # #  #   #   #   # #  # # #   ###  ###  # #  ###  # #  ##   ###  ##  # #  #      #    #    #    #   ##   ###"<<endl;
cout<<"   #   #  # #  #   # #  #    # #    #  #   #   #     # # # # #   #  #    #   #  # #  # # #   # #  # #  # #  # #  # #  #    # #  #   # #  #       #   #     #   #   #    # #"<<endl;
cout<<"   #####  # # ###   #   ###  # #  ##  ###  #  ###    # # ##  #   # ### ##  ##  ### ##  # #   # #  # #  # #  # #   ##  ###  # #  ### # #  #     ##   ###  ##    #   ###  # #"<<endl;
cout<< endl;
   }