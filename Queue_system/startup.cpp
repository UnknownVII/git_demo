#include <iostream>
#include <windows.h>
#include "library.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void welcome();
void menu();
void backgroundBorder(int z);

int main(){
    int x=800,y=600,z=95;
    window_Size(x,y);
    SetConsoleTitle("Queueing System v1.0");
    setCenterConsole(x,y);
    background(z);
    backgroundBorder(z);
    welcome();
    menu();
 return 0;
}

void welcome (){
    int colorSet = 11;
    //TOP TITLE
    gotoxy(27,2);color(colorSet);  cout <<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB"<< endl;
    gotoxy(27,3);color(colorSet);  cout <<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDA\xC4\xC4\xBF\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB"<< endl;
    gotoxy(27,4);color(colorSet);  cout <<"\xDB\xDA\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC2\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xB4  \xC0\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\xDB" << endl;
    gotoxy(27,5);color(colorSet);  cout <<"\xDB"<< "|__ --|  |  |__ --|   _|  -__|        |\xDB" << endl;
    gotoxy(27,6);color(colorSet);  cout <<"\xDB"<< "|_____|___  |_____|____|_____|__|__|__|\xDB" << endl;
    gotoxy(27,7);color(colorSet);  cout <<"\xDB\xDC\xDC\xDC\xDC\xDC\xDC|_____|\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDB" << endl;
    gotoxy(27,8);color(colorSet);  cout <<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB"<< endl;
    //MIDDLE TITLE
     gotoxy(27,9);color(colorSet); cout <<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB       \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB" << endl;
    gotoxy(27,10);color(colorSet); cout <<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB" << endl;
    gotoxy(27,11);color(colorSet); cout <<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB" << endl;
    gotoxy(27,11);color(colorSet); cout <<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB" << endl;
    gotoxy(27,12);color(colorSet); cout <<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB \xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB" << endl;
    gotoxy(27,13);color(colorSet); cout <<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB" << endl;
    gotoxy(27,14);color(colorSet); cout <<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB     \xDB \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB" << endl;
    gotoxy(27,15);color(colorSet); cout <<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB" << endl;
    //RESET CURSOR AND COLOR VALUES
    color(7);
    gotoxy(0,0);
}
void menu(){
    string howto1 = "//ARROW KEYS to navigate//";
    string howto2 = "//Hit ENTER to proceed//";
    int checker = 0,checked=0;
    //BOTTOM BOX
    gotoxy(27,16);cout << "\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF" << endl;
    gotoxy(27,17);cout << "\xB3                                       \xB3" << endl;
    gotoxy(27,18);cout << "\xC3\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xB4" << endl;
    gotoxy(27,19);cout << "\xB3                                       \xB3" << endl;
    gotoxy(27,20);cout << "\xB3                                       \xB3" << endl;
    gotoxy(27,21);cout << "\xB3                                       \xB3" << endl;
    gotoxy(27,22);cout << "\xB3                                       \xB3" << endl;
    gotoxy(27,23);cout << "\xB3                                       \xB3" << endl;
    gotoxy(27,24);cout << "\xB3                                       \xB3" << endl;
    gotoxy(27,25);cout << "\xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9" << endl;

    //REMOVE BACKGROUND
    gotoxy(27,28); cout<<"                                         ";
    gotoxy(27,27); cout<<"  Note:                                  ";

    //CONTROL NOTE
    gotoxy(35,27); animate(howto1);
    gotoxy(35,28); animate(howto2);

    //SHOW MENU
    gotoxy(28,17);
    cout << "MENU:";

    //INITIALIZING OF VALUES
    int Set[] = {7,7,7,7};
    int counter = 1, colorSelect = 176;
    char key;

    //DEFAULT COLOR POSITION VALUE
    Set[0] = colorSelect;

    //MENU POSITION AND SELECTION
    while(1){

        color(Set[0]); gotoxy(43,20); cout << "ORDER     ";
        color(Set[1]); gotoxy(43,21); cout << "ABOUT     ";
        color(Set[2]); gotoxy(43,22); cout << "RECEIPT   ";
        color(Set[3]); gotoxy(43,23); cout << "EXIT      ";
        gotoxy(0,0);

        key = _getch();
        if (key == 72 && (counter >=2 && counter <=4)){
            counter --;
        }
        if (key == 80 && (counter >=1 && counter <=3)){
            counter ++;
        }
        if(key == '\r'){
            break;
        }
        //DEFAULT COLOR VALUE
        for(int i = 0; i<=4 ; i++){
            Set[i] = 7;
        }
        //COLOR VALUE INDICATION
        if (counter == 1){
            Set[0] = colorSelect;
        }
        if (counter == 2){
            Set[1] = colorSelect;
        }
        if (counter == 3){
            Set[2] = colorSelect;
        }
        if (counter == 4){
            Set[3] = colorSelect;
        }
    }

    //BUY OPTION
    if(counter == 1){
        color(7);
        system("cls");
        int xx = 900,yy = 600;
        window_Size(xx,yy);
        setCenterConsole(xx,yy);
        system("mainInterface.exe");
    }

    //ABOUT OPTION
    if(counter == 2){
        color(7);
        system("cls");
        system("about.exe");
    }

    //RECIEPT OPTION
    if(counter == 3){
        system("cls");
        color(7);
        int xxx = 1100,yyy = 600;
        window_Size(xxx,yyy);
        setCenterConsole(xxx,yyy);
        //system("start explorer transactions");
        system("viewport.exe");
        //system("startup.exe");
    }
    //QUIT OPTION
    if(counter == 4){
        color(7);
        system("cls");
        cout << "System is exiting";
        animate("...");
        cout << endl;
        system("taskkill /IM startup.exe /IM List.exe /IM About.exe /F");
        exit(0);
    }
}
void backgroundBorder(int x){
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
    //MIDDLE END
    gotoxy(26,26); cout  <<  "\xCC";
    gotoxy(27,26);
    for (int q = 0; q <= 40; q++){
        cout  <<  "\xCD";
    }
    gotoxy(68,26); cout  <<  "\xB9";
    //END
    gotoxy(26,29); cout  <<  "\xCC";
    gotoxy(68,29); cout  <<  "\xB9";
    gotoxy(27,29);
    for (int q = 0; q <= 40; q++){
        cout  <<  "\xCD";
    }
    //END Version
    gotoxy(26,31); cout  <<  "\xC8";
    gotoxy(68,31); cout  <<  "\xBC";
    gotoxy(26,30); cout << "\xBA" << "                                         " << "\xBA";
    gotoxy(27,31);
    for (int q = 0; q <= 40; q++){
        cout  <<  "\xCD";
    }
    color(128);gotoxy(27,30); cout << "                  v 1.0                  ";
}
