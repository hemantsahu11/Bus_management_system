#include <iostream>
#include<stdio.h>
#include<fstream>
#include<conio.h>
#include"../conio2.h"
using namespace std;
void box(int row,int col,int endrow,int endcol,int color)
{
    int i,j;
    for( i=row;i<=endrow;i++)
    {
        for(j=col;j<=endcol;j++)
        {
            gotoxy(j,i);
            textbackground(color);
            printf(" ");
        }
    }
}
void admin_panel();
void user_panel();
int main()
{
    system("cls");
    textcolor(WHITE);
    textbackground(BLACK);
    box(3,30,5,94,YELLOW);
    gotoxy(45,4);
    textcolor(RED);
    cout<<"Bus Management System ";
    int ch;
    textcolor(WHITE);
    do
    {
            box(7,24,11,100,MAGENTA);
            gotoxy(34,8);
            cout <<"1. Admin \t\t\t 2. user panel";
            gotoxy(34,10);
            cout<<"Enter your choice : ";
            cin>>ch;
            switch(ch)
            {
            case 1:
                admin_panel();
                break;
            case 2:
                user_panel();
                break;
            default:
                box(13,40,13,84,RED);
                gotoxy(44,13);
                cout<<"!!!!   Enter valid choice ";
                exit(0);
            }
    }while(ch!=0);
    return 0;
}
