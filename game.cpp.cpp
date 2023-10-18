#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void printPlayer();
void printEnemy();
void printEnemy1();
void printEnemy2();
void moveEnemy();
void moveE();
void moveE2();
void moveEnemy(string direction);
string changeDirection(string direction);
void eraseEnemy();
void eraseEnemy1();
void eraseEnemy2();
void movePlayer();
void erasePlayer();
char getCharAtxy(short int x, short int y);
void movePlayerLeft();
void movePlayerRight();
void movePlayerUp();
void movePlayerDown();
void Bonus();
void enemy();
void printbonus();
int ex1=75, ey1=20;  
int vx=72,vy=4;
int ex=4, ey=3;
int px=2,py=17;
main()
{
    system("cls");
    printMaze();
    printEnemy();
    printEnemy1();
    printEnemy2();
    printPlayer();
    string enemyDirection = "left";
    enemy();
    Bonus();
    printbonus();

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

moveEnemy(enemyDirection);
enemyDirection = changeDirection(enemyDirection);
moveE();
moveE2();
Sleep(100);
}
eraseEnemy1();
eraseEnemy();
eraseEnemy2();

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
    if (getCharAtxy(ex,ey)== '#')
    {
        cout<<"Game over";
        getch();
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
string changeDirection(string direction)
{

    if (direction == "right" && ex1 <= 2)
    {
        direction = "left";
    }
    if (direction == "left" && ex1 >= 72)
    {
        direction = "right";
    }
    return direction;
}
void moveEnemy(string direction)
{
     eraseEnemy1();
    if (direction == "right")
    {
        ex1 = ex1 - 1;
    }
    if (direction == "left")
    {
        ex1 = ex1 + 1;
    }
    printEnemy();
}
void moveE()
{
    Sleep(100);
    eraseEnemy();
    ey=ey+1;
    if(ey==16)
    {
        ey=2,ex=ex+8;
    }
    if(ex==71||ex==72||ex==74||ex==75||ex==73||ex==76||ex==70||ex==69)
    {
        ex=3;
    }
    printEnemy1();
}
void moveE2()
{
    Sleep(100);
    eraseEnemy2();
    vy=vy+1;
    vx=vx-5;
    if(vy==18||vx==7)
    {
        vy=5,vx=72;
    }
    printEnemy2();
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
void Bonus()
{
    int bonus=0;
    if(GetAsyncKeyState('o'));
    bonus++;
    int x=2,y=25;
    gotoxy(x=2,y=24);
    cout<<"Bonus"<<bonus;
}
void printbonus()
{
    int e=14,r=14;
    gotoxy(e,r);
    cout<<"o";
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
    gotoxy(ex1,ey1);
cout<<"@@";
}
void printEnemy()
{
    gotoxy(ex,ey);
cout<<"/\\"<<endl;
}
void printEnemy2()
{
    gotoxy(vx,vy);
    cout<<"<^-^>";
}
void eraseEnemy()
{
    gotoxy(ex,ey);
    cout<<"  ";
    if(ex-1)
    cout<<"  ";
}
void eraseEnemy1()
{
    gotoxy(ex1,ey1);
    cout<<"  ";
    if(ex1-1)
    cout<<"  ";

}
void eraseEnemy2()
{
    gotoxy(vx,vy);
    cout<<"    ";
    if(vx-1)
    cout<<"    ";
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
