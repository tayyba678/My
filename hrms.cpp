#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <cmath>
void printHeader();
int menu();
using namespace std;
int choice;
int main()
{
    int employeeCount = 1;
    string employeeName;
    int employeeId;
    double employeeSalary = 0;
    while(true)
    {
        system("cls");
    printHeader();
    menu();
    if (choice ==1)
 {
    string name;
                    int id;
                    double salary;

                    cout << "Enter employee name: ";
                    cin>>name;

                    cout << "Enter employee ID: ";
                    cin >> id;

                    cout << "Enter employee salary: ";
                    cin >> salary;
                    employeeCount++;
            
                    cout <<employeeCount<<endl;
                    cout << "Employee added successfully." << endl;
                    getch();
                    } 
                
               
 
    
    if (choice==2)
    {
        
                cout << "Employee List:" << endl;
        
                    cout << "Name: ";
                    cin>>employeeName;
                    cout << "ID: ";
                    cin>>employeeId;
                getch();
    }
    if (choice==3)
    {
        cout<<"Enter Employee Salary";
        cin>> employeeSalary;
                    double totalSalary = employeeSalary;
                    double averageSalary = totalSalary / employeeCount;
                    cout << "Average Salary: $" << averageSalary << endl;
                    getch();
    }

if (choice==4)
{
    int id;
                cout << "Enter employee ID: ";
                cin >> id;
                    double bonus;
                    cout << "Enter bonus amount: ";
                    cin >> bonus;
                    cout << "Enter employee Salary: ";
                    cin>> employeeSalary;

                    employeeSalary += bonus;
                    cout << "Salary updated successfully." << endl;
                    getch();
}


if(choice==5)
{
    int task;
    cout<<"Have you done tasks(1=Yes,0=No)?"<<endl;
    cin>> task;
    if(task==1)
    cout<<"Task done successfully";
getch();
}
if(choice==6)
{
    cout << "Exiting HRMS. Goodbye!" << endl;

                return 0;
                getch();
}
}
}
void printHeader()
{
 cout << "*****************************************************************************" << endl;
 cout << "*                    Human Resource Management System                       *" << endl;
 cout << "*****************************************************************************" << endl;
 cout<<endl;
 }
 int menu() { 
        cout << "1. Add Employee" << endl;
        cout << "2. Display All Employees" << endl;
        cout << "3. Calculate Average Salary" << endl;
        cout << "4. Increase Salary" << endl;
        cout<<  "5. Check task"<<endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        return choice;
 }
   