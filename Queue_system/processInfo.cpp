#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "library.h"

using namespace std;

void printPage1();void printPage6();
void printPage2();void printPage7();
void printPage3();void printPage8();
void printPage4();void printPage9();
void printPage5();void printPage10();
void printPage11();

void inBox();
void outBox();

int main(){
    int z = 95, counter = 1;
    char key;
    //SetConsoleTitle("About System");
    //background(z);
    outBox();

    //REMOVE BACKGROUND
    gotoxy(27,26); cout << "                                         ";
    gotoxy(27,27); cout << "                                         ";
    gotoxy(27,28); cout << "                                         ";

    //SHOW TEXT
   // gotoxy(27,2); color(7); cout << " ABOUT:                                  ";
    color(7);
    printPage1();
    gotoxy(0,0);
    //INSIDE TEXT

    //INITIALIZE VALUES
    int Set[] = {7,7};
    int colorSelect = 176;
    //Set[0] = colorSelect;
    Set[0] = 128;
    Set[1] = 128;
    gotoxy(36,26); cout << "         " << counter << " / 11         ";
    gotoxy(36,27); cout << " PRESS "; color(176); cout << "'B'"; color(7); cout << " TO  GO"; color(11); cout << " BACK    "; color(7);
    color(Set[0]); gotoxy(28,27); cout << "  <<<  ";
    color(Set[1]); gotoxy(60,27); cout << "  >>>  ";
    color(Set[0]); gotoxy(28,26); cout << "  <<<  ";
    color(Set[1]); gotoxy(60,26); cout << "  >>>  ";
    while(1){
        //color(Set[2]); gotoxy(52,27); cout << "   MENU   ";
        gotoxy(0,0);

        key = _getch();
        if (key == 75 && (counter >=2 && counter <=11)){
            counter --;
            Set[0] = colorSelect;
            color(Set[0]); gotoxy(28,26); cout << "  <<<  ";
            color(Set[0]); gotoxy(28,27); cout << "  <<<  ";
            if (counter>=10){
                color(11); gotoxy(43,26); cout << "   ";
                color(11); gotoxy(44,26); cout << counter;
            } else if (counter<=9) {
                color(11); gotoxy(43,26); cout << "   ";
                color(11); gotoxy(45,26); cout << counter;
            }
            Sleep(100);
            Set[0] = 128;
            color(Set[0]); gotoxy(28,26); cout << "  <<<  ";
            color(Set[0]); gotoxy(28,27); cout << "  <<<  ";
        }
        if (key == 77 && (counter >=1 && counter <=10)){
            counter ++;
            Set[1] = colorSelect;
            color(Set[1]); gotoxy(60,26); cout << "  >>>  ";
            color(Set[1]); gotoxy(60,27); cout << "  >>>  ";
            if (counter>=10){
                color(11); gotoxy(43,26); cout << "   ";
                color(11); gotoxy(44,26); cout << counter;
            } else if (counter<=9) {
                color(11); gotoxy(43,26); cout << "   ";
                color(11); gotoxy(45,26); cout << counter;
            }
            Sleep(100);
            Set[1] = 128;
            color(Set[1]); gotoxy(60,26); cout << "  >>>  ";
            color(Set[1]); gotoxy(60,27); cout << "  >>>  ";
        }
        if(key == 'b'){
            color(7);
            //system("cls");
            system("about.exe");
            break;
        }
        if (counter == 1){
            color(7);
            printPage1();
        }
        if (counter == 2){
            color(7);
            printPage2();
        }
        if (counter == 3){
            color(7);
            printPage3();
        }
        if (counter == 4){
            color(7);
            printPage4();
        }
        if (counter == 5){
            color(7);
            printPage5();
        }
        if (counter == 6){
            color(7);
            printPage6();
        }
        if (counter == 7){
            color(7);
            printPage7();
        }
        if (counter == 8){
            color(7);
            printPage8();
        }
        if (counter == 9){
            color(7);
            printPage9();
        }
        if (counter == 10){
            color(7);
            printPage10();
        }
        if (counter == 11){
            color(7);
            printPage11();
        }
    }
 return 0;
}
void printPage1(){
    gotoxy(27, 2); cout << " ABOUT:                                  ";
    gotoxy(27, 3); cout << "                                         ";
    gotoxy(27, 4); cout << " The system works with 11 system         ";
    gotoxy(27, 5); cout << " components, each working differently,   ";
    gotoxy(27, 6); cout << " and sometimes depending on the input    ";
    gotoxy(27, 7); cout << " from different systems.                 ";
    gotoxy(27, 8); cout << "                                         ";
    gotoxy(27, 9); cout << " Such systems are:                       ";
    gotoxy(27,10); cout << "                                         ";
    gotoxy(27,11); cout << " 1) "; color(11); cout<< "startup.exe"; color(7); cout<< " <= handles the initial   ";
    gotoxy(27,12); cout << "    UI elements, controls, and the       ";
    gotoxy(27,13); cout << "    primary system calls.                ";
    gotoxy(27,14); cout << "                                         ";
    gotoxy(27,15); cout << "    It is the grandest parent and has 3  ";
    gotoxy(27,16); cout << "    children namely:                     ";
    gotoxy(27,17); cout << "                                         ";
    gotoxy(27,18); cout << "        (a) "; color(11); cout<< "mainInterface.exe"; color(7); cout<< "            ";
    gotoxy(27,19); cout << "        (b) "; color(11); cout<< "viewport.exe"; color(7); cout<< "                 ";
    gotoxy(27,20); cout << "        (c) "; color(11); cout<< "about.exe"; color(7); cout<< "                    ";
    gotoxy(27,21); cout << "                                         ";
    gotoxy(27,22); cout << "                                         ";
    gotoxy(27,23); cout << "                                         ";
    gotoxy(27,24); cout << "                                         ";
    gotoxy(27,25); cout << "                                         ";
}
void printPage2(){
    gotoxy(27, 2); cout << " ABOUT:                                  ";
    gotoxy(27, 3); cout << "                                         ";
    gotoxy(27, 4); cout << " The system works with 11 system         ";
    gotoxy(27, 5); cout << " components, each working differently,   ";
    gotoxy(27, 6); cout << " and sometimes depending on the input    ";
    gotoxy(27, 7); cout << " from different systems.                 ";
    gotoxy(27, 8); cout << "                                         ";
    gotoxy(27, 9); cout << " Such systems are:                       ";
    gotoxy(27,10); cout << "                                         ";
    gotoxy(27,11); cout << " 2) "; color(11); cout<< "mainInterface.exe"; color(7); cout<< " <= handles UI      ";
    gotoxy(27,12); cout << "    transfer to the next system element  ";
    gotoxy(27,13); cout << "    of List.exe                          ";
    gotoxy(27,14); cout << "                                         ";
    gotoxy(27,15); cout << "                                         ";
    gotoxy(27,16); cout << "                                         ";
    gotoxy(27,17); cout << "                                         ";
    gotoxy(27,18); cout << "                                         ";
    gotoxy(27,19); cout << "                                         ";
    gotoxy(27,20); cout << "                                         ";
    gotoxy(27,21); cout << "                                         ";
    gotoxy(27,22); cout << "                                         ";
    gotoxy(27,23); cout << "                                         ";
    gotoxy(27,24); cout << "                                         ";
    gotoxy(27,25); cout << "                                         ";
}
void printPage3(){
    gotoxy(27, 2); cout << " ABOUT:                                  ";
    gotoxy(27, 3); cout << "                                         ";
    gotoxy(27, 4); cout << " The system works with 11 system         ";
    gotoxy(27, 5); cout << " components, each working differently,   ";
    gotoxy(27, 6); cout << " and sometimes depending on the input    ";
    gotoxy(27, 7); cout << " from different systems.                 ";
    gotoxy(27, 8); cout << "                                         ";
    gotoxy(27, 9); cout << " Such systems are:                       ";
    gotoxy(27,10); cout << "                                         ";
    gotoxy(27,11); cout << " 3) "; color(11); cout<< "List.exe"; color(7); cout<< " <= displays the store       ";
    gotoxy(27,12); cout << "    components, accepts user selection   ";
    gotoxy(27,13); cout << "    and coordinates the next three       ";
    gotoxy(27,14); cout << "    systems to process the transaction   ";
    gotoxy(27,15); cout << "    data.                                ";
    gotoxy(27,16); cout << "                                         ";
    gotoxy(27,17); cout << "    This system has the most children    ";
    gotoxy(27,18); cout << "    of 4 namely:                         ";
    gotoxy(27,19); cout << "                                         ";
    gotoxy(27,20); cout << "        (a) "; color(11); cout<< "print_start.exe"; color(7); cout<< "              ";
    gotoxy(27,21); cout << "        (b) "; color(11); cout<< "calculate.exe"; color(7); cout<< "                ";
    gotoxy(27,22); cout << "        (c) "; color(11); cout<< "print_end.exe"; color(7); cout<< "                ";
    gotoxy(27,23); cout << "        (d) "; color(11); cout<< "cancel.exe"; color(7); cout<< "                   ";
    gotoxy(27,24); cout << "                                         ";
    gotoxy(27,25); cout << "                                         ";
}
void printPage4(){
    gotoxy(27, 2); cout << " ABOUT:                                  ";
    gotoxy(27, 3); cout << "                                         ";
    gotoxy(27, 4); cout << " The system works with 11 system         ";
    gotoxy(27, 5); cout << " components, each working differently,   ";
    gotoxy(27, 6); cout << " and sometimes depending on the input    ";
    gotoxy(27, 7); cout << " from different systems.                 ";
    gotoxy(27, 8); cout << "                                         ";
    gotoxy(27, 9); cout << " Such systems are:                       ";
    gotoxy(27,10); cout << "                                         ";
    gotoxy(27,11); cout << " 4) "; color(11); cout<< "print_start.exe"; color(7); cout<< " <= boots immediately ";
    gotoxy(27,12); cout << "    after List.exe is initialised,       ";
    gotoxy(27,13); cout << "    recovers recent serial_number from   ";
    gotoxy(27,14); cout << "    system_files and creates transaction ";
    gotoxy(27,15); cout << "    file in transactions directory       ";
    gotoxy(27,16); cout << "    and embeds a header.                 ";
    gotoxy(27,17); cout << "                                         ";
    gotoxy(27,18); cout << "                                         ";
    gotoxy(27,19); cout << "                                         ";
    gotoxy(27,20); cout << "                                         ";
    gotoxy(27,21); cout << "                                         ";
    gotoxy(27,22); cout << "                                         ";
    gotoxy(27,23); cout << "                                         ";
    gotoxy(27,24); cout << "                                         ";
    gotoxy(27,25); cout << "                                         ";
}
void printPage5(){
    gotoxy(27, 2); cout << " ABOUT:                                  ";
    gotoxy(27, 3); cout << "                                         ";
    gotoxy(27, 4); cout << " The system works with 11 system         ";
    gotoxy(27, 5); cout << " components, each working differently,   ";
    gotoxy(27, 6); cout << " and sometimes depending on the input    ";
    gotoxy(27, 7); cout << " from different systems.                 ";
    gotoxy(27, 8); cout << "                                         ";
    gotoxy(27, 9); cout << " Such systems are:                       ";
    gotoxy(27,10); cout << "                                         ";
    gotoxy(27,11); cout << " 5) "; color(11); cout<< "calculate.exe"; color(7); cout<< " <= after user          ";
    gotoxy(27,12); cout << "    selection of item, it takes the      ";
    gotoxy(27,13); cout << "    item ID and serial from print start, ";
    gotoxy(27,14); cout << "    then checks the price of item.       ";
    gotoxy(27,15); cout << "    Then it takes in the quantity,       ";
    gotoxy(27,16); cout << "    then calculates for total,.          ";
    gotoxy(27,17); cout << "    then return number for full_total    ";
    gotoxy(27,18); cout << "                                         ";
    gotoxy(27,19); cout << "    It then passes those parameters to   ";
    gotoxy(27,20); cout << "    it's only child:                     ";
    gotoxy(27,21); cout << "                                         ";
    gotoxy(27,22); cout << "        (a) "; color(11); cout<< "print_transaction.exe"; color(7); cout<< "        ";
    gotoxy(27,23); cout << "                                         ";
    gotoxy(27,24); cout << "                                         ";
    gotoxy(27,25); cout << "                                         ";
}
void printPage6(){
    gotoxy(27, 2); cout << " ABOUT:                                  ";
    gotoxy(27, 3); cout << "                                         ";
    gotoxy(27, 4); cout << " The system works with 11 system         ";
    gotoxy(27, 5); cout << " components, each working differently,   ";
    gotoxy(27, 6); cout << " and sometimes depending on the input    ";
    gotoxy(27, 7); cout << " from different systems.                 ";
    gotoxy(27, 8); cout << "                                         ";
    gotoxy(27, 9); cout << " Such systems are:                       ";
    gotoxy(27,10); cout << "                                         ";
    gotoxy(27,11); cout << " 6) "; color(11); cout<< "print_transaction.exe"; color(7); cout<< " <= takes in    ";
    gotoxy(27,12); cout << "    serial id, quantity, and item id     ";
    gotoxy(27,13); cout << "    then appends it to the transaction   ";
    gotoxy(27,14); cout << "    log created by print_start.exe       ";
    gotoxy(27,15); cout << "                                         ";
    gotoxy(27,16); cout << "                                         ";
    gotoxy(27,17); cout << "                                         ";
    gotoxy(27,18); cout << "                                         ";
    gotoxy(27,19); cout << "                                         ";
    gotoxy(27,20); cout << "                                         ";
    gotoxy(27,21); cout << "                                         ";
    gotoxy(27,22); cout << "                                         ";
    gotoxy(27,23); cout << "                                         ";
    gotoxy(27,24); cout << "                                         ";
    gotoxy(27,25); cout << "                                         ";
}
void printPage7(){
    gotoxy(27, 2); cout << " ABOUT:                                  ";
    gotoxy(27, 3); cout << "                                         ";
    gotoxy(27, 4); cout << " The system works with 11 system         ";
    gotoxy(27, 5); cout << " components, each working differently,   ";
    gotoxy(27, 6); cout << " and sometimes depending on the input    ";
    gotoxy(27, 7); cout << " from different systems.                 ";
    gotoxy(27, 8); cout << "                                         ";
    gotoxy(27, 9); cout << " Such systems are:                       ";
    gotoxy(27,10); cout << "                                         ";
    gotoxy(27,11); cout << " 7) "; color(11); cout<< "print_end.exe"; color(7); cout<< " <= after the user      ";
    gotoxy(27,12); cout << "    completes selection, it takes the    ";
    gotoxy(27,13); cout << "    full_total, appends it to the        ";
    gotoxy(27,14); cout << "    transaction log, then increments the ";
    gotoxy(27,15); cout << "    serial number for the next           ";
    gotoxy(27,16); cout << "    transaction.                         ";
    gotoxy(27,17); cout << "                                         ";
    gotoxy(27,18); cout << "                                         ";
    gotoxy(27,19); cout << "                                         ";
    gotoxy(27,20); cout << "                                         ";
    gotoxy(27,21); cout << "                                         ";
    gotoxy(27,22); cout << "                                         ";
    gotoxy(27,23); cout << "                                         ";
    gotoxy(27,24); cout << "                                         ";
    gotoxy(27,25); cout << "                                         ";
}
void printPage8(){
    gotoxy(27, 2); cout << " ABOUT:                                  ";
    gotoxy(27, 3); cout << "                                         ";
    gotoxy(27, 4); cout << " The system works with 11 system         ";
    gotoxy(27, 5); cout << " components, each working differently,   ";
    gotoxy(27, 6); cout << " and sometimes depending on the input    ";
    gotoxy(27, 7); cout << " from different systems.                 ";
    gotoxy(27, 8); cout << "                                         ";
    gotoxy(27, 9); cout << " Such systems are:                       ";
    gotoxy(27,10); cout << "                                         ";
    gotoxy(27,11); cout << " 8) "; color(11); cout<< "cancel.exe"; color(7); cout<< " <= if the user cancels    ";
    gotoxy(27,12); cout << "    the transaction, it removes the file ";
    gotoxy(27,13); cout << "    created by print_start.exe and       ";
    gotoxy(27,14); cout << "    decrements the serial_number from    ";
    gotoxy(27,15); cout << "    system_files directory               ";
    gotoxy(27,16); cout << "                                         ";
    gotoxy(27,17); cout << "                                         ";
    gotoxy(27,18); cout << "                                         ";
    gotoxy(27,19); cout << "                                         ";
    gotoxy(27,20); cout << "                                         ";
    gotoxy(27,21); cout << "                                         ";
    gotoxy(27,22); cout << "                                         ";
    gotoxy(27,23); cout << "                                         ";
    gotoxy(27,24); cout << "                                         ";
    gotoxy(27,25); cout << "                                         ";
}
void printPage9(){
    gotoxy(27, 2); cout << " ABOUT:                                  ";
    gotoxy(27, 3); cout << "                                         ";
    gotoxy(27, 4); cout << " The system works with 11 system         ";
    gotoxy(27, 5); cout << " components, each working differently,   ";
    gotoxy(27, 6); cout << " and sometimes depending on the input    ";
    gotoxy(27, 7); cout << " from different systems.                 ";
    gotoxy(27, 8); cout << "                                         ";
    gotoxy(27, 9); cout << " Such systems are:                       ";
    gotoxy(27,10); cout << "                                         ";
    gotoxy(27,11); cout << " 9) "; color(11); cout<< "viewport.exe"; color(7); cout<< " <= allows user to       ";
    gotoxy(27,12); cout << "    select or search through serial      ";
    gotoxy(27,13); cout << "    numbers and view previous existing   ";
    gotoxy(27,14); cout << "    transaction details recovered from   ";
    gotoxy(27,15); cout << "    transactions directory.              ";
    gotoxy(27,16); cout << "                                         ";
    gotoxy(27,17); cout << "                                         ";
    gotoxy(27,18); cout << "                                         ";
    gotoxy(27,19); cout << "                                         ";
    gotoxy(27,20); cout << "                                         ";
    gotoxy(27,21); cout << "                                         ";
    gotoxy(27,22); cout << "                                         ";
    gotoxy(27,23); cout << "                                         ";
    gotoxy(27,24); cout << "                                         ";
    gotoxy(27,25); cout << "                                         ";
}
void printPage10(){
    gotoxy(27, 2); cout << " ABOUT:                                  ";
    gotoxy(27, 3); cout << "                                         ";
    gotoxy(27, 4); cout << " The system works with 11 system         ";
    gotoxy(27, 5); cout << " components, each working differently,   ";
    gotoxy(27, 6); cout << " and sometimes depending on the input    ";
    gotoxy(27, 7); cout << " from different systems.                 ";
    gotoxy(27, 8); cout << "                                         ";
    gotoxy(27, 9); cout << " Such systems are:                       ";
    gotoxy(27,10); cout << "                                         ";
    gotoxy(27,11); cout << " 10) "; color(11); cout<< "about.exe"; color(7); cout<< " <= displays about system  ";
    gotoxy(27,12); cout << "    and then defines how the system      ";
    gotoxy(27,13); cout << "    works.                               ";
    gotoxy(27,14); cout << "                                         ";
    gotoxy(27,15); cout << "    It only have one child to show and   ";
    gotoxy(27,16); cout << "    defines how the system works:        ";
    gotoxy(27,17); cout << "                                         ";
    gotoxy(27,18); cout << "    (a) "; color(11); cout<< "processInfo.exe"; color(7); cout<< "                  ";
    gotoxy(27,19); cout << "                                         ";
    gotoxy(27,20); cout << "                                         ";
    gotoxy(27,21); cout << "                                         ";
    gotoxy(27,22); cout << "                                         ";
    gotoxy(27,23); cout << "                                         ";
    gotoxy(27,24); cout << "                                         ";
    gotoxy(27,25); cout << "                                         ";
}
void printPage11(){
    gotoxy(27, 2); cout << " ABOUT:                                  ";
    gotoxy(27, 3); cout << "                                         ";
    gotoxy(27, 4); cout << " The system works with 11 system         ";
    gotoxy(27, 5); cout << " components, each working differently,   ";
    gotoxy(27, 6); cout << " and sometimes depending on the input    ";
    gotoxy(27, 7); cout << " from different systems.                 ";
    gotoxy(27, 8); cout << "                                         ";
    gotoxy(27, 9); cout << " Such systems are:                       ";
    gotoxy(27,10); cout << "                                         ";
    gotoxy(27,11); cout << " 11) "; color(11); cout<< "processInfo.exe"; color(7); cout<< " <= displays the     ";
    gotoxy(27,12); cout << "    additional definition and processes  ";
    gotoxy(27,13); cout << "    of the system.                       ";
    gotoxy(27,14); cout << "                                         ";
    gotoxy(27,15); cout << "                                         ";
    gotoxy(27,16); cout << "                                         ";
    gotoxy(27,17); cout << "                                         ";
    gotoxy(27,18); cout << "                                         ";
    gotoxy(27,19); cout << "                                         ";
    gotoxy(27,20); cout << "                                         ";
    gotoxy(27,21); cout << "                                         ";
    gotoxy(27,22); cout << "                                         ";
    gotoxy(27,23); cout << "                                         ";
    gotoxy(27,24); cout << "                                         ";
    gotoxy(27,25); cout << "                                         ";
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
