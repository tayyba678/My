#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void printPlayer();
void printEnemy();
void printEnemy1();
void eraseEnemy();
void moveEnemy();
void moveE();
void movePlayer();
void erasePlayer();
char getCharAtxy(short int x, short int y);
void movePlayerLeft();
void movePlayerRight();
void movePlayerUp();
void movePlayerDown();
void enemy();
int ex=78, ey=20;
int px=2,py=17;
main()
{
    system("cls");
    printMaze();
    printEnemy();
    printEnemy1();
    printPlayer();

while (true)
{


if (GetAsyncKeyState(VK_LEFT))
{
movePlayerLeft();
} 
if (GetAsyncKeyState(VK_RIGHT))
{
movePlayerRight();
}
if (GetAsyncKeyState(VK_UP))
{
    movePlayerUp();
}
if (GetAsyncKeyState(VK_DOWN))
{
    movePlayerDown();
}
moveEnemy();
moveE();
Sleep(200);
}
eraseEnemy();
}
void movePlayer()
{
px=px+1;
printPlayer();
}
void movePlayerRight()
{
    if (getCharAtxy(px+15,py)== ' ')
    {
        erasePlayer();
        px=px+1;
printPlayer();
    }
} 
void enemy()
{
    if (printPlayer==printEnemy)
    {
        getch();
        cout<<"Gameover, Try again";
    }
}



void movePlayerLeft()
{
    if (getCharAtxy(px-1,py)== ' ')
    {
       erasePlayer();
        px=px-1;
printPlayer();
    }
} 
void movePlayerUp()
{
    if (getCharAtxy(px,py-1)== ' ')
    {
        erasePlayer();
        py=py-1;
printPlayer();
    }
}
void movePlayerDown()
{
    if (getCharAtxy(px,py+6)== ' ')
    {
        erasePlayer();
        py=py+1;
printPlayer();
    }
}
void moveEnemy()
{
    eraseEnemy();
    ex=ex-1;
    if(ex==1)
    {
        ex=81;
    }
    printEnemy();
}
void moveE()
{
    eraseEnemy();
    ex=2,ey=2;
    if(ey==16)
    {
        ey=2,ex=ex+5;
    }
    printEnemy1();
}

void printPlayer()
{
    gotoxy(px,py);
cout<<"#####"<<endl;
gotoxy(px,py+1);
cout<<"#. .#"<<endl;
gotoxy(px,py+2);
cout<<"#####"<<endl;
gotoxy(px,py+3);
cout<<"/###\\"<<endl;
gotoxy(px,py+4);
cout<<" # # "<<endl;
}
void erasePlayer()
{
     gotoxy(px,py);
cout<<"     "<<endl;
gotoxy(px,py+1);
cout<<"     "<<endl;
gotoxy(px,py+2);
cout<<"     "<<endl;
gotoxy(px,py+3);
cout<<"     "<<endl;
gotoxy(px,py+4);
cout<<"     "<<endl;
}
void printEnemy1()
{
    gotoxy(ex=2,ey=2);
cout<<"@@";
}
void printEnemy()
{
    gotoxy(ex,ey);
cout<<"@@"<<endl;
}
void eraseEnemy()
{
    gotoxy(ex,ey);
    cout<<"  ";
    if(ex-1)
    cout<<"  ";

}
void printMaze()
{
cout << "#################################################################################" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#                                                                               #" << endl;
cout << "#################################################################################" << endl;
}
char getCharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy = {0, 0};
 SMALL_RECT rect = {x, y, x, y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}