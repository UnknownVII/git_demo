#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "library.h"

using namespace std;

void printPage1();
void inBox();
void outBox();

int main(){
    int z = 95, counter = 1;
    char key;
    SetConsoleTitle("About System");
    background(z);
    outBox();

    //REMOVE BACKGROUND
    gotoxy(27,26); cout << "                                         ";
    gotoxy(27,27); cout << "                                         ";
    gotoxy(27,28); cout << "                                         ";

    //SHOW TEXT
    gotoxy(27,2); color(7); cout << " ABOUT:                                  ";
    printPage1();
    gotoxy(0,0);
    //INSIDE TEXT
    inBox();
    gotoxy(28,17); cout << " PROGRAMMED BY: ";
    gotoxy(28,20); animate(" JOHN WILBERT ABSALON");
    gotoxy(28,21); animate(" JOHN MICHAEL BALCEDA");
    gotoxy(28,22); animate(" KYLE CEPEDA");
    gotoxy(28,23); animate(" JOSHUA MEGUISO");

    //INITIALIZE VALUES
    int Set[] = {7,7,7,7};
    int colorSelect = 176;
    Set[0] = colorSelect;
    Set[1] = 128;
    Set[2] = 128;

    while(1){

        color(Set[0]); gotoxy(33,27); cout << "  ABOUT  ";
        color(Set[1]); gotoxy(43,27); cout << "  HOW?  ";
        color(Set[2]); gotoxy(52,27); cout << "   MENU   ";
        gotoxy(0,0);

        key = _getch();
        if (key == 75 && (counter >=2 && counter <=3)){
            counter --;
        }
        if (key == 77 && (counter >=1 && counter <=2)){
            counter ++;
        }
        if(key == '\r' && counter == 3){
            color(7);
            system("cls");
            system("startup.exe");
            break;
        } else if (key == '\r' && counter == 1){
            color(7); printPage1();
        } else if (key == '\r' && counter == 2){
            color(7);
            system("processInfo.exe");
        }
        //DEFAULT VALUES
        Set[0] = 128;
        Set[1] = 128;
        Set[2] = 128;

        if (counter == 1){
            Set[0] = colorSelect;

        }
        if (counter == 2){
            Set[1] = colorSelect;

        }
        if (counter == 3){

            Set[2] = colorSelect;
        }
    }
 return 0;
}
void printPage1(){

    gotoxy(27,3);  cout << "                                         ";
    gotoxy(27,4);  cout << " System Q, a Queueing System that will   ";
    gotoxy(27,5);  cout << " help a business entity to manage their  ";
    gotoxy(27,6);  cout << " transactions, record and view their ,   ";
    gotoxy(27,7);  cout << " data, and allow users of the system to  ";
    gotoxy(27,8);  cout << " access the Item Catalogue with relative ";
    gotoxy(27,9);  cout << " ease due to the user-friendly UI.       ";
    gotoxy(27,10); cout << "                                         ";
    gotoxy(27,11); cout << " It also features certain aspects of     ";
    gotoxy(27,12); cout << " system calls and modularization.        ";
    gotoxy(27,13); cout << "                                         ";
    gotoxy(27,14); cout << "                                         ";
    gotoxy(27,15); cout << "                                         ";
    inBox();
    gotoxy(28,17); cout << " PROGRAMMED BY: ";
    gotoxy(28,20); cout << " JOHN WILBERT ABSALON";
    gotoxy(28,21); cout << " JOHN MICHAEL BALCEDA";
    gotoxy(28,22); cout << " KYLE CEPEDA";
    gotoxy(28,23); cout << " JOSHUA MEGUISO";
}
void inBox(){
    gotoxy(27,16); cout << "\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF";
    gotoxy(27,17); cout << "\xB3                                       \xB3";
    gotoxy(27,18); cout << "\xC3\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xB4";
    gotoxy(27,19); cout << "\xB3                                       \xB3";
    gotoxy(27,20); cout << "\xB3                                       \xB3";
    gotoxy(27,21); cout << "\xB3                                       \xB3";
    gotoxy(27,22); cout << "\xB3                                       \xB3";
    gotoxy(27,23); cout << "\xB3                                       \xB3";
    gotoxy(27,24); cout << "\xB3                                       \xB3";
    gotoxy(27,25); cout << "\xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9";
}
void outBox(){
    //TOP
    gotoxy(26,1); cout  <<  "\xC9";
    gotoxy(27,1);
    for (int q = 0; q <= 40; q++){
        cout  <<  "\xCD";
    }
    gotoxy(68,1); cout  <<  "\xBB";
    //SIDES
    for (int q = 2; q <= 28; q++){
        gotoxy(26,q);
        cout  <<  "\xBA";
        gotoxy(68,q);
        cout  <<  "\xBA";
    }
    //END
    gotoxy(26,29); cout  <<  "\xC8";
    gotoxy(68,29); cout  <<  "\xBC";
    gotoxy(27,29);
    for (int q = 0; q <= 40; q++){
        cout  <<  "\xCD";
    }
}
