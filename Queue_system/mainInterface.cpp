#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "library.h"

using namespace std;
void  box();
int main (){
    int counter = 1;
    backgroundLarge(350);
    box();
    gotoxy(5,6); cout << "  WELCOME  CUSTOMER!  ";
    system("List.exe");

}
void  box(){
    //TOP
     color(7);
    gotoxy(1,1); cout  <<  "\xC9";
    gotoxy(2,1);
    for (int q = 0; q <= 103; q++){
        cout  <<  "\xCD";
        //gotoxy(2,2);cout  << "\xC4";
    }
    gotoxy(2,2);
    for (int q = 0; q <= 103; q++){
        color(11);cout  << "\xDF";
    }
    color(7);gotoxy(106,1); cout  <<  "\xBB";
    //SIDES
    for (int q = 2; q <= 32; q++){
        gotoxy(1,q);
        color(7);cout  <<  "\xBA";
        gotoxy(2,q);
        color(11); cout  <<  "\xDB";
        gotoxy(105,q);
        color(11);cout  <<  "\xDB";
        gotoxy(106,q);
        color(7);cout  <<  "\xBA";
    }
    //END
    gotoxy(1,33); cout  <<  "\xC8";
    gotoxy(106,33); cout  <<  "\xBC";
    gotoxy(2,33);
    for (int q = 0; q <= 103; q++){
        cout  <<  "\xCD";
    }
    gotoxy(3,32);
    for (int q = 0; q <= 101; q++){
        color(11);cout  << "\xDC";
    }
    //TOP SMALL BOX
    color(7);
    gotoxy(4,5); cout  <<  "\xC9";
    gotoxy(5,5);
    for (int q = 0; q <= 21; q++){
        cout  <<  "\xC4";
        //gotoxy(2,2);cout  << "\xC4";
    }
    gotoxy(27,5); cout  << "\xBB";
    //SIDES SMALL BOX
    for (int q = 6; q <= 6; q++){
        gotoxy(4,q);
        color(7);cout  <<  "\xB3";
        gotoxy(27,q);
        color(7);cout  <<  "\xB3";
    }
    //END SMALL BOX
    gotoxy(4,7); cout  <<  "\xC8";
    gotoxy(27,7); cout  <<  "\xBC";
    gotoxy(5,7);
    for (int x = 0; x <= 21; x++){
        cout  <<  "\xC4";
    }

}
