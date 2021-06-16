#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include "library.h"

using namespace std;

int transferData (int choiceSelect,int serial);
void table();
void page1();
void page2();
void page3();
void lowerBoard();
void upperBoard(string n);
void box();
void box2();
void controls();
void show();
void showBoard();
void transactionBox();

int main(){
    int Set[] = {7,7,7,7,7,7,7,7,7,7};
    int Set2[] = {7,7};
    int counter2 = 1, maxIncrement = 0;
    int counter = 1,choice = 1, totalItem = 0;
    int item2 = 0,item3 = 0;
    int qt, serial, full_total=0, temp_total=0, colorSelect = 176;
    char key,keys, respondKey;
    char systemCommandLine[120] = "";
    char lnbuffer1[40];
    table();
    serial = system("print_start.exe ");
    transactionBox();
    gotoxy (5,29); cout << "Transaction ID: " <<setw(4) << right << serial;
    gotoxy (30,9); cout << "No. " << '\xB3' << setw(6) << "Item" << setw(26) << '\xB3'<< "  Price\n";
    page1();
    box();
    box2();

    gotoxy(29, 23); cout << '\xB3'<< "                                               " << '\xB3' << endl;
    gotoxy(38,23); cout          << "            PAGE 1             ";
    //gotoxy(31, 25); cout << "quantity";
    color(10); gotoxy(30, 28); cout << "Status:"; color(7);

    gotoxy(30, 29); cout          << "                SELECTING STORE                ";

    controls();
    show();
    gotoxy(29, 26); cout << '\xB3'<< "-----------------------------------------------" << '\xB3' << endl;
    color(128); gotoxy(31,23); cout << "  <<<  ";
    color(128); gotoxy(69,23); cout << "  >>>  ";
    color(7);
    while(1){
		key = _getch();
        if (key == 75 && (counter >=2 && counter <=3)){
            counter --;
            color(176); gotoxy(31,23); cout << "  <<<  ";
            if(counter == 1){
                choice = 1;
                color(7);
                gotoxy(38,23); cout           << "            PAGE 1             ";
                color(7);
                page1();
            } else if (counter == 2){
                choice = 2;
                color(7);
                gotoxy(38,23); cout           << "            PAGE 2             ";
                color(7);
                page2();
            } else if (counter == 3){
                choice = 3;
                color(7);
                gotoxy(38,23); cout           << "            PAGE 3             ";
                color(7);
                page3();
            }
            Sleep(100);
            color(128); gotoxy(31,23); cout << "  <<<  ";
            color(7);
        }
        if (key == 77 && (counter >=1 && counter <=2)){
            counter ++;
            color(176); gotoxy(69,23); cout << "  >>>  ";
            if(counter == 1){
                choice = 1;
                color(7);
                gotoxy(38,23); cout           << "            PAGE 1             ";
                color(7);
                page1();
            } else if (counter == 2){
                choice = 2;
                color(7);
                gotoxy(38,23); cout           << "            PAGE 2             ";
                color(7);
                page2();
            } else if (counter == 3){
                choice = 3;
                color(7);
                gotoxy(38,23); cout           << "            PAGE 3             ";
                color(7);
                page3();
            }
            Sleep(100);
            color(128); gotoxy(69,23); cout << "  >>>  ";
            color(7);
        }
        if(key == '\r'){
            break;
        } else if (key == 'b'){
            gotoxy(0,0);
            system("cls");
            system("cancel.exe ");
            system("startup.exe ");
        }
	}
	//page 1 select
    if(choice == 1){
        color(10); gotoxy(30, 28); cout << "Status:"; color(7);
        gotoxy(30, 29); cout          << "      QUEUEING ITEMS----Phone Accessories      ";
        counter = 1;
        Set[0] = colorSelect;
        while(1){
            gotoxy(87,29); cout << left << full_total<<".00";
            while(1){
                /*
                if(totalItem == 19){

                }*/
                color(Set[0]);
                gotoxy(35,11); cout << " Portable Chargers           ";
                color(Set[1]);
                gotoxy(35,12); cout << " Selfie Sticks               ";
                color(Set[2]);
                gotoxy(35,13); cout << " USB OTG Flash Drives        ";
                color(Set[3]);
                gotoxy(35,14); cout << " Headphones                  ";
                color(Set[4]);
                gotoxy(35,15); cout << " Bluetooth Earbuds           ";
                color(Set[5]);
                gotoxy(35,16); cout << " Smartwatches                ";
                color(Set[6]);
                gotoxy(35,17); cout << " Gaming Controllers          ";
                color(Set[7]);
                gotoxy(35,18); cout << " Portable Bluetooth Speakers ";
                color(Set[8]);
                gotoxy(35,19); cout << " Headphone Adapter           ";
                color(Set[9]);
                gotoxy(35,20); cout << " Phone Ring Holder           ";

                key = _getch();
                if (key == 72 && (counter >=2 && counter <=10)){
                    counter --;
                }
                if (key == 80 && (counter >=1 && counter <=9)){
                    counter ++;
                }
                if(key == '\r'){
                    color(7);
                    break;
                } else if(key == 'p'){
                    color(7);
                    gotoxy(30,29); cout << "                                             ";

                    if(serial < 10){
                        gotoxy(30,29); cout << "            TRANSACTION #"<< serial <<" COMPLETE            ";
                    } else if (serial >=10 && serial < 100){
                        gotoxy(30,29); cout << "           TRANSACTION #"<< serial <<" COMPLETE           ";
                    } else {
                        gotoxy(30,29); cout << "           TRANSACTION #"<< serial <<" COMPLETE           ";
                    }

                    gotoxy(31,23); cout << "     THANK YOU FOR QUEUEING,QUEUE AGAIN?     ";
                    itoa(full_total,lnbuffer1,10);
                    strcpy(systemCommandLine, "print_end.exe ");
                    strcat(systemCommandLine, lnbuffer1);
                    strcat(systemCommandLine, " ");
                    itoa(serial,lnbuffer1,10);
                    strcat(systemCommandLine, lnbuffer1);
                    system(systemCommandLine);
                    Set2[0] = 176;
                    while(1){
                        color(Set2[0]); gotoxy(45, 26);cout << "YES";
                        color(Set2[1]); gotoxy(60,26); cout << "NO";
                        keys = _getch();
                        if (keys == 75 && (counter2 >=2 && counter2 <=2)){
                            counter2 --;
                        }
                        if (keys == 77 && (counter2 >=1 && counter2 <=1)){
                            counter2 ++;
                        }
                        if(keys== 13){
                            if(counter2 == 1){
                                system("list.exe ");
                                break;
                            } else {
                                color(7);
                                system("cls");
                                system("startup.exe ");
                                break;
                            }
                        }
                        for(int i = 0; i<=2 ; i++){
                            Set2[i] = 7;
                        }
                        if (counter2 == 1){
                            Set2[0] = colorSelect;
                        }
                        if (counter2 == 2){
                            Set2[1] = colorSelect;
                        }
                    }
                } else if (key == 'b'){
                    color(7);
                    system("cancel.exe ");
                    system("list.exe ");
                }
                //DEFAULT COLOR
                for(int i=0; i<=10; i++){
                    Set[i] = 7;
                }
                //SET COLOR
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
                if (counter == 5){
                    Set[4] = colorSelect;
                }
                if (counter == 6){
                    Set[5] = colorSelect;
                }
                if (counter == 7){
                    Set[6] = colorSelect;
                }
                if (counter == 8){
                    Set[7] = colorSelect;
                }
                if (counter == 9){
                    Set[8] = colorSelect;
                }
                if (counter == 10){
                    Set[9] = colorSelect;
                }
            }

            string item[11] = {"Portable Chargers", "Selfie Sticks", "USB OTG Flash ...", "Headphones", "Bluetooth Earbuds", "Smartwatches", "Gaming Control...", "Portable Bluet...", "Headphone Adapter", "Phone Ring Holder", "Phone Ring Holder"};
            if(totalItem < 19 && key == '\r'){
                maxIncrement++;
                if (maxIncrement<19){
                    color(10); gotoxy(91,6); cout << maxIncrement ;color(7); cout<<"/19"; color(7);
                } else if (maxIncrement=19){
                    color(12); gotoxy(91,6); cout <<"19/19"; color(7);
                }
                gotoxy(80,totalItem+8);
                cout << item[counter-1];
                gotoxy(100,totalItem+8);
                cout << "0";
                totalItem++;
            } else {
                color(12);gotoxy(30, 28); cout          << "Status:";color(7);
                gotoxy(30,29); cout << "  You have reached the maximum items to queue";
                gotoxy(30,26); cout << "  CANCEL Order (B)?  or  PROCEED to Queue (P)  ";
                while(1){
                    key = _getch();
                    if(key == 'p'){
                        color(7);
                        key = 'p';
                        itoa(full_total,lnbuffer1,10);
                        strcpy(systemCommandLine, "print_end.exe ");
                        strcat(systemCommandLine, lnbuffer1);
                        strcat(systemCommandLine, " ");
                        itoa(serial,lnbuffer1,10);
                        strcat(systemCommandLine, lnbuffer1);
                        system(systemCommandLine);
                        gotoxy(30,29); cout << "                                             ";
                        color(10);gotoxy(30, 28); cout          << "Status:";color(7);
                        if(serial < 10){
                            gotoxy(30,29); cout << "            TRANSACTION #"<< serial <<" COMPLETE            ";
                        } else if (serial >=10 && serial < 100){
                            gotoxy(30,29); cout << "           TRANSACTION #"<< serial <<" COMPLETE           ";
                        } else {
                            gotoxy(30,29); cout << "           TRANSACTION #"<< serial <<" COMPLETE           ";
                        }
                        gotoxy(31,23); cout << "     THANK YOU FOR QUEUEING,QUEUE AGAIN?     ";
                        Set2[0] = 176;
                        gotoxy(29, 26); cout << '\xB3'<< "-----------------------------------------------" << '\xB3' << endl;
                        while(1){
                            color(Set2[0]); gotoxy(45, 26);cout << "YES";
                            color(Set2[1]); gotoxy(60,26); cout << "NO";
                            keys = _getch();
                            if (keys == 75 && (counter2 >=2 && counter2 <=2)){
                                counter2 --;
                            }
                            if (keys == 77 && (counter2 >=1 && counter2 <=1)){
                                counter2 ++;
                            }
                            if(keys== 13){
                                if(counter2 == 1){
                                    system("list.exe ");
                                    break;
                                } else {
                                    color(7);
                                    system("cls");
                                    system("startup.exe ");
                                    break;
                                }
                            }
                            for(int i = 0; i<=2 ; i++){
                                Set2[i] = 7;
                            }
                            if (counter2 == 1){
                                Set2[0] = colorSelect;
                            }
                            if (counter2 == 2){
                                Set2[1] = colorSelect;
                            }
                        }
                    break;
                    } else if(key == 'b'){
                        color(7);
                        system("cancel.exe ");
                        system("List.exe ");
                        break;
                    }
                }
                break;
            }
            color(7);
            //SET COLOR PAGE 1
            if (counter == 1){
                full_total = full_total + transferData(counter,serial);
            }
            if (counter == 2){
                full_total = full_total + transferData(counter,serial);
            }
            if (counter == 3){
                full_total = full_total + transferData(counter,serial);
            }
            if (counter == 4){
                full_total = full_total + transferData(counter,serial);
            }
            if (counter == 5){
                full_total = full_total + transferData(counter,serial);
            }
            if (counter == 6){
                full_total = full_total + transferData(counter,serial);
            }
            if (counter == 7){
                full_total = full_total + transferData(counter,serial);
            }
            if (counter == 8){
                full_total = full_total + transferData(counter,serial);
            }
            if (counter == 9){
                full_total = full_total + transferData(counter,serial);
            }
            if (counter == 10){
                full_total = full_total + transferData(counter,serial);
            }
        }
    //page 2 select
    } else if (choice == 2){
        color(10); gotoxy(30, 28); cout << "Status:"; color(7);
        gotoxy(30, 29); cout          << "           QUEUEING ITEMS----Make Up           ";
        counter = 1;
        Set[0] = colorSelect;
        while(1){
            gotoxy(87,29); cout << left << full_total<<".00";
            while(1){
                color(Set[0]);
                gotoxy(35,11); cout << " Face Primer                 ";
                color(Set[1]);
                gotoxy(35,12); cout << " Foundation                  ";
                color(Set[2]);
                gotoxy(35,13); cout << " BB Cream                    ";
                color(Set[3]);
                gotoxy(35,14); cout << " Concealer                   ";
                color(Set[4]);
                gotoxy(35,15); cout << " Blush                       ";
                color(Set[5]);
                gotoxy(35,16); cout << " Highlighter                 ";
                color(Set[6]);
                gotoxy(35,17); cout << " Bronzer                     ";
                color(Set[7]);
                gotoxy(35,18); cout << " Setting Powder              ";
                color(Set[8]);
                gotoxy(35,19); cout << " Eye Primer                  ";
                color(Set[9]);
                gotoxy(35,20); cout << " Eyeshadow                   ";

                key = _getch();
                if (key == 72 && (counter >=2 && counter <=10)){
                    counter --;
                }
                if (key == 80 && (counter >=1 && counter <=9)){
                    counter ++;
                }
                if(key == '\r'){
                    color(7);
                    break;
                } else if(key == 'p'){
                    color(7);
                    gotoxy(30,29); cout << "                                             ";
                    if(serial < 10){
                        gotoxy(30,29); cout << "            TRANSACTION #"<< serial <<" COMPLETE            ";
                    } else if (serial >=10 && serial < 100){
                        gotoxy(30,29); cout << "           TRANSACTION #"<< serial <<" COMPLETE           ";
                    } else {
                        gotoxy(30,29); cout << "           TRANSACTION #"<< serial <<" COMPLETE           ";
                    }
                    gotoxy(31,23); cout << "     THANK YOU FOR QUEUEING,QUEUE AGAIN?     ";
                    itoa(full_total,lnbuffer1,10);
                    strcpy(systemCommandLine, "print_end.exe ");
                    strcat(systemCommandLine, lnbuffer1);
                    strcat(systemCommandLine, " ");
                    itoa(serial,lnbuffer1,10);
                    strcat(systemCommandLine, lnbuffer1);
                    system(systemCommandLine);
                    Set2[0] = 176;
                    while(1){
                        color(Set2[0]); gotoxy(45, 26);cout << "YES";
                        color(Set2[1]); gotoxy(60,26); cout << "NO";
                        keys = _getch();
                        if (keys == 75 && (counter2 >=2 && counter2 <=2)){
                            counter2 --;
                        }
                        if (keys == 77 && (counter2 >=1 && counter2 <=1)){
                            counter2 ++;
                        }
                        if(keys== 13){
                            if(counter2 == 1){
                                system("list.exe ");
                                break;
                            } else {
                                color(7);
                                system("cls");
                                system("startup.exe ");
                                break;
                            }
                        }
                        for(int i = 0; i<=2 ; i++){
                            Set2[i] = 7;
                        }
                        if (counter2 == 1){
                            Set2[0] = colorSelect;
                        }
                        if (counter2 == 2){
                            Set2[1] = colorSelect;
                        }
                    }
                } else if (key == 'b'){
                    color(7);
                    system("cancel.exe ");
                    system("list.exe ");
                }
                //DEFAULT COLOR
                for(int i=0; i<=10; i++){
                    Set[i] = 7;
                }
                //SET COLOR
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
                if (counter == 5){
                    Set[4] = colorSelect;
                }
                if (counter == 6){
                    Set[5] = colorSelect;
                }
                if (counter == 7){
                    Set[6] = colorSelect;
                }
                if (counter == 8){
                    Set[7] = colorSelect;
                }
                 if (counter == 9){
                    Set[8] = colorSelect;
                }
                if (counter == 10){
                    Set[9] = colorSelect;
                }
            }
            string item[11] = {"Face Primer", "Foundation", "BB Cream", "Concealer", "Blush", "Highlighter", "Bronzer", "Setting Powder", "Eye Primer", "Eyeshadow"};
            if(totalItem < 19 && key == '\r'){
                maxIncrement++;
                if (maxIncrement<19){
                    color(10); gotoxy(91,6); cout << maxIncrement ;color(7); cout<<"/19"; color(7);
                } else if (maxIncrement=19){
                    color(12); gotoxy(91,6); cout <<"19/19"; color(7);
                }
                gotoxy(80,totalItem+8);
                cout << item[counter-1];
                gotoxy(100,totalItem+8);
                cout << "0";
                totalItem++;
            } else {
                color(12); gotoxy(30, 28); cout << "Status:"; color(7);
                gotoxy(30,29); cout << "  You have reached the maximum items to queue";
                gotoxy(30,26); cout << "  CANCEL Order (B)?  or  PROCEED to Queue (P)  ";
                while(1){
                    key = _getch();
                    if(key == 'p'){
                        color(7);
                        key = 'p';
                        itoa(full_total,lnbuffer1,10);
                        strcpy(systemCommandLine, "print_end.exe ");
                        strcat(systemCommandLine, lnbuffer1);
                        strcat(systemCommandLine, " ");
                        itoa(serial,lnbuffer1,10);
                        strcat(systemCommandLine, lnbuffer1);
                        system(systemCommandLine);
                        gotoxy(30,29); cout << "                                             ";
                        color(10);gotoxy(30, 28); cout          << "Status:";color(7);
                        if(serial < 10){
                            gotoxy(30,29); cout << "            TRANSACTION #"<< serial <<" COMPLETE            ";
                        } else if (serial >=10 && serial < 100){
                            gotoxy(30,29); cout << "           TRANSACTION #"<< serial <<" COMPLETE           ";
                        } else {
                            gotoxy(30,29); cout << "           TRANSACTION #"<< serial <<" COMPLETE           ";
                        }
                        gotoxy(31,23); cout << "     THANK YOU FOR QUEUEING,QUEUE AGAIN?     ";
                        Set2[0] = 176;
                        gotoxy(29, 26); cout << '\xB3'<< "-----------------------------------------------" << '\xB3' << endl;
                        while(1){
                            color(Set2[0]); gotoxy(45, 26);cout << "YES";
                            color(Set2[1]); gotoxy(60,26); cout << "NO";
                            keys = _getch();
                            if (keys == 75 && (counter2 >=2 && counter2 <=2)){
                                counter2 --;
                            }
                            if (keys == 77 && (counter2 >=1 && counter2 <=1)){
                                counter2 ++;
                            }
                            if(keys== 13){
                                if(counter2 == 1){
                                    system("list.exe ");
                                    break;
                                } else {
                                    color(7);
                                    system("cls");
                                    system("startup.exe ");
                                    break;
                                }
                            }
                            for(int i = 0; i<=2 ; i++){
                                Set2[i] = 7;
                            }
                            if (counter2 == 1){
                                Set2[0] = colorSelect;
                            }
                            if (counter2 == 2){
                                Set2[1] = colorSelect;
                            }
                        }
                    break;
                    } else if(key == 'b'){
                        color(7);
                        system("cancel.exe ");
                        system("List.exe ");
                        break;
                    }
                }
                break;
            }
            color(7);
            //SET COLOR
            if (counter == 1){
                item2 = counter + 10;
                full_total = full_total + transferData(item2,serial);
            }
            if (counter == 2){
                item2 = counter + 10;
                full_total = full_total + transferData(item2,serial);
            }
            if (counter == 3){
                item2 = counter + 10;
                full_total = full_total + transferData(item2,serial);
            }
            if (counter == 4){
                item2 = counter + 10;
                full_total = full_total + transferData(item2,serial);
            }
            if (counter == 5){
                item2 = counter + 10;
                full_total = full_total + transferData(item2,serial);
            }
            if (counter == 6){
                item2 = counter + 10;
                full_total = full_total + transferData(item2,serial);
            }
            if (counter == 7){
                item2 = counter + 10;
                full_total = full_total + transferData(item2,serial);
            }
            if (counter == 8){
                item2 = counter + 10;
                full_total = full_total + transferData(item2,serial);
            }
            if (counter == 9){
                item2 = counter + 10;
                full_total = full_total + transferData(item2,serial);
            }
            if (counter == 10){
                item2 = counter + 10;
                full_total = full_total + transferData(item2,serial);
            }
        }
    //page 3 select
    } else if (choice == 3){
        color(10); gotoxy(30, 28); cout << "Status:"; color(7);
        gotoxy(30, 29); cout          << "          QUEUEING ITEMS---Appliances          ";
        counter = 1;
        Set[0] = colorSelect;
        while(1){
            gotoxy(87,29); cout << left << full_total<<".00";
            while(1){
                color(Set[0]);
                gotoxy(35,11); cout << " Coffee maker                ";
                color(Set[1]);
                gotoxy(35,12); cout << " Blender                     ";
                color(Set[2]);
                gotoxy(35,13); cout << " Mixer                       ";
                color(Set[3]);
                gotoxy(35,14); cout << " Toaster                     ";
                color(Set[4]);
                gotoxy(35,15); cout << " Microwave                   ";
                color(Set[5]);
                gotoxy(35,16); cout << " Crock pot                   ";
                color(Set[6]);
                gotoxy(35,17); cout << " Rice cooker                 ";
                color(Set[7]);
                gotoxy(35,18); cout << " Pressure cooker             ";
                color(Set[8]);
                gotoxy(35,19); cout << " Stove                       ";
                color(Set[9]);
                gotoxy(35,20); cout << " Lamp                        ";

                key = _getch();
                if (key == 72 && (counter >=2 && counter <=10)){
                    counter --;
                }
                if (key == 80 && (counter >=1 && counter <=9)){
                    counter ++;
                }
                if(key == '\r'){
                    color(7);
                    break;
                } else if(key == 'p'){
                    color(7);
                    gotoxy(30,29); cout << "                                             ";
                    if(serial < 10){
                        gotoxy(30,29); cout << "            TRANSACTION #"<< serial <<" COMPLETE            ";
                    } else if (serial >=10 && serial < 100){
                        gotoxy(30,29); cout << "           TRANSACTION #"<< serial <<" COMPLETE           ";
                    } else {
                        gotoxy(30,29); cout << "           TRANSACTION #"<< serial <<" COMPLETE           ";
                    }
                    gotoxy(31,23); cout << "     THANK YOU FOR QUEUEING,QUEUE AGAIN?     ";
                    itoa(full_total,lnbuffer1,10);
                    strcpy(systemCommandLine, "print_end.exe ");
                    strcat(systemCommandLine, lnbuffer1);
                    strcat(systemCommandLine, " ");
                    itoa(serial,lnbuffer1,10);
                    strcat(systemCommandLine, lnbuffer1);
                    system(systemCommandLine);
                    Set2[0] = 176;
                    while(1){
                        color(Set2[0]); gotoxy(45, 26);cout << "YES";
                        color(Set2[1]); gotoxy(60,26); cout << "NO";
                        keys = _getch();
                        if (keys == 75 && (counter2 >=2 && counter2 <=2)){
                            counter2 --;
                        }
                        if (keys == 77 && (counter2 >=1 && counter2 <=1)){
                            counter2 ++;
                        }
                        if(keys== 13){
                            if(counter2 == 1){
                                system("list.exe ");
                                break;
                            } else {
                                color(7);
                                system("cls");
                                system("startup.exe ");
                                break;
                            }
                        }
                        for(int i = 0; i<=2 ; i++){
                            Set2[i] = 7;
                        }
                        if (counter2 == 1){
                            Set2[0] = colorSelect;
                        }
                        if (counter2 == 2){
                            Set2[1] = colorSelect;
                        }
                    }
                } else if (key == 'b'){
                    color(7);
                    system("cancel.exe ");
                    system("list.exe ");
                }
                //DEFAULT COLOR
                for(int i=0; i<=10; i++){
                    Set[i] = 7;
                }

                //SET COLOR PAGE 3
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
                if (counter == 5){
                    Set[4] = colorSelect;
                }
                if (counter == 6){
                    Set[5] = colorSelect;
                }
                if (counter == 7){
                    Set[6] = colorSelect;
                }
                if (counter == 8){
                    Set[7] = colorSelect;
                }
                 if (counter == 9){
                    Set[8] = colorSelect;
                }
                if (counter == 10){
                    Set[9] = colorSelect;
                }
            }
            string item[11] = {"Coffee maker", "Blender", "Mixer", "Toaster", "Microwave", "Crock pot", "Rice cooker", "Pressure cooker", "Stove", "Lamp"};
            if(totalItem < 19 && key == '\r'){
                maxIncrement++;
                if (maxIncrement<19){
                    color(10); gotoxy(91,6); cout << maxIncrement ;color(7); cout<<"/19"; color(7);
                } else if (maxIncrement=19){
                    color(12); gotoxy(91,6); cout <<"19/19"; color(7);
                }
                gotoxy(80,totalItem+8);
                cout << item[counter-1];
                gotoxy(100,totalItem+8);
                cout << "0";
                totalItem++;
            } else {
                color(12); gotoxy(30, 28); cout << "Status:"; color(7);
                gotoxy(30,29); cout << "  You have reached the maximum items to queue";
                gotoxy(30,26); cout << "  CANCEL Order (B)?  or  PROCEED to Queue (P)  ";
                while(1){
                    key = _getch();
                    if(key == 'p'){
                        color(7);
                        key = 'p';
                        itoa(full_total,lnbuffer1,10);
                        strcpy(systemCommandLine, "print_end.exe ");
                        strcat(systemCommandLine, lnbuffer1);
                        strcat(systemCommandLine, " ");
                        itoa(serial,lnbuffer1,10);
                        strcat(systemCommandLine, lnbuffer1);
                        system(systemCommandLine);
                        gotoxy(30,29); cout << "                                             ";
                        color(10);gotoxy(30, 28); cout          << "Status:";color(7);
                        if(serial < 10){
                            gotoxy(30,29); cout << "            TRANSACTION #"<< serial <<" COMPLETE            ";
                        } else if (serial >=10 && serial < 100){
                            gotoxy(30,29); cout << "           TRANSACTION #"<< serial <<" COMPLETE           ";
                        } else {
                            gotoxy(30,29); cout << "           TRANSACTION #"<< serial <<" COMPLETE           ";
                        }
                        gotoxy(31,23); cout << "     THANK YOU FOR QUEUEING,QUEUE AGAIN?     ";
                        Set2[0] = 176;
                        gotoxy(29, 26); cout << '\xB3'<< "-----------------------------------------------" << '\xB3' << endl;
                        while(1){

                            color(Set2[0]); gotoxy(45, 26);cout << "YES";
                            color(Set2[1]); gotoxy(60,26); cout << "NO";
                            keys = _getch();
                            if (keys == 75 && (counter2 >=2 && counter2 <=2)){
                                counter2 --;
                            }
                            if (keys == 77 && (counter2 >=1 && counter2 <=1)){
                                counter2 ++;
                            }
                            if(keys== 13){
                                if(counter2 == 1){
                                    system("list.exe ");
                                    break;
                                } else {
                                    color(7);
                                    system("cls");
                                    system("startup.exe ");
                                    break;
                                }
                            }
                            for(int i = 0; i<=2 ; i++){
                                Set2[i] = 7;
                            }
                            if (counter2 == 1){
                                Set2[0] = colorSelect;
                            }
                            if (counter2 == 2){
                                Set2[1] = colorSelect;
                            }
                        }
                        break;
                    } else if(key == 'b'){
                        color(7);
                        system("cancel.exe ");
                        system("List.exe ");
                        break;
                    }
                }
                break;
            }
            color(7);
            //SET COLOR
            if (counter == 1){
                item3 = counter + 20;
                full_total = full_total + transferData(item3,serial);
            }
            if (counter == 2){
                item3 = counter + 20;
                full_total = full_total + transferData(item3,serial);
            }
            if (counter == 3){
                item3 = counter + 20;
                full_total = full_total + transferData(item3,serial);
            }
            if (counter == 4){
                item3 = counter + 20;
                full_total = full_total + transferData(item3,serial);
            }
            if (counter == 5){
                item3 = counter + 20;
                full_total = full_total + transferData(item3,serial);
            }
            if (counter == 6){
                item3 = counter + 20;
                full_total = full_total + transferData(item3,serial);
            }
            if (counter == 7){
                item3 = counter + 20;
                full_total = full_total + transferData(item3,serial);
            }
            if (counter == 8){
                item3 = counter + 20;
                full_total = full_total + transferData(item3,serial);

            }
            if (counter == 9){
                item3 = counter + 20;
                full_total = full_total + transferData(item3,serial);
            }
            if (counter == 10){
                item3 = counter + 20;
                full_total = full_total + transferData(item3,serial);
            }
        }
}
    gotoxy(0,0);
	return 0;
}
void page1(){
    upperBoard("               Phone Accessories               ");
    string item[11] = { " Portable Chargers                    ",
                        " Selfie Sticks                        ",
                        " USB OTG Flash Drives                 ",
                        " Headphones                           ",
                        " Bluetooth Earbuds                    ",
                        " Smartwatches                         ",
                        " Gaming Controllers                   ",
                        " Portable Bluetooth Speakers          ",
                        " Headphone Adapter                    ",
                        " Phone Ring Holder                    ",},

    price[11] = {"680.00", "49.00", "252.00", "699.00", "155.00", "99.00", "445.00", "399.00", "27.00", "35.00"};

    for(int i = 0; i<10; i++){
        gotoxy(30,i+11);
        for(int j = 0; j<48; j++){
            if(j == 4){
                if(i!= 9){
                    cout << setw(4) << '\xB3' << item[i];
                }
                else{
                    cout << setw(3) << '\xB3' << item[i];
                }
            } else if(j == 0){
                cout << i+1;
            } else if(j == 36){
                gotoxy(64,i+11);
                cout << "  " << '\xB3' << setw(8) << right << price[i];
            }
        }
    }
    cout << "\n\n\n\n\n\n\n\n";
}
void page2(){
    upperBoard("                    Make Up                    ");
    string item[11] = { " Face Primer                          ",
                        " Foundation                           ",
                        " BB Cream                             ",
                        " Concealer                            ",
                        " Blush                                ",
                        " Highlighter                          ",
                        " Bronzer                              ",
                        " Setting Powder                       ",
                        " Eye Primer                           ",
                        " Eyeshadow                            "},

    price[11] = {"91.00", "45.00", "190.00", "49.00", "100.00", "128.00", "180.00", "168.00", "100.00", "160.00"};

    for(int i = 0; i<10; i++){
        gotoxy(30,i+11);
        for(int j = 0; j<48; j++){
            if(j == 4){
                cout << setw(3) << '\xB3' << item[i];
            } else if(j == 0){
                cout <<i+11;
            } else if(j == 36){
                gotoxy(64, i+11);
                cout << "  " << '\xB3' << setw(8) << right << price[i];
            }
        }
    }
    cout << "\n\n\n\n\n\n\n\n";
}
void page3(){
    upperBoard("                  Appliances                   ");
    string item[11] = { " Coffee maker                         ",
                        " Blender                              ",
                        " Mixer                                ",
                        " Toaster                              ",
                        " Microwave                            ",
                        " Crock pot                            ",
                        " Rice cooker                          ",
                        " Pressure cooker                      ",
                        " Stove                                ",
                        " Lamp                                 "},

    price[11] = {"899.00", "649.00", "180.00", "850.00", "3650.00", "3000.00", "350.00", "1119.00", "2000.00", "39.00"};

    for(int i = 0; i<10; i++){
        gotoxy(30,i+11);
        for(int j = 0; j<48; j++){
            if(j == 4){
                cout << setw(3) << '\xB3' << item[i];
            } else if(j == 0){
                cout << i+21;
            } else if(j == 36){
                gotoxy(64,i+11);
                cout << "  " << '\xB3' << setw(8) << right << price[i];
            }
        }
    }
    cout << "\n\n\n\n\n\n\n\n";
}
void table(){
    gotoxy(29,8); cout << '\xDA';
    for(int i = 0; i<48; i++){
        if(i == 4){
            cout << '\xC2';
        } else if(i == 36){
            cout << '\xC2';
        } else if(i == 47){
            cout  << '\xBF';
        } else {
            cout << '\xC4';
        }
    }
    gotoxy(29,9); cout << '\xB3' << setw(5) << '\xB3' << setw(32) << '\xB3' << setw(11) << '\xB3' << endl;
    gotoxy(29,10); cout << '\xC3';
    for(int i = 0; i<48; i++){
        if(i == 4){
            cout << '\xC5';
        } else if(i == 36){
            cout << '\xC5';
        } else if(i == 47){
            cout << '\xB4';
        } else {
            cout << '\xC4';
        }
    }
    cout << endl;
    for(int i = 0; i<10; i++){
        gotoxy(29,i+11);
        for(int j = 0; j<48; j++){
            if(j == 4){
                cout << setw(5) << '\xB3';
            } else if(j == 0){
                cout << '\xB3';
            } else if(j == 36){
                cout << setw(32) << '\xB3';
            } else if(j == 47){
                cout << setw(11) << '\xB3';
            }
        }
    }
    gotoxy(29,21); cout << '\xC0';
    for(int i = 0; i<48; i++){
        if(i == 4){
            cout << '\xC1';
        } else if(i == 36){
            cout << '\xC1';
        } else if(i == 47){
            cout << '\xD9';
        } else {
            cout << '\xC4';
        }
    }
    lowerBoard();
}
void upperBoard(string n){
    gotoxy(29,5); cout << '\xDA';
    for(int i = 0; i<48; i++){
        if(i == 47){
            cout << '\xBF';
        } else {
            cout << '\xC4';
        }
    }
    gotoxy(29,6); cout << '\xB3'<< n << '\xB3' << endl;
    gotoxy(29,7); cout << '\xC0';
    for(int i = 0; i<48; i++){
        if(i == 47){
            cout << '\xD9';
        } else {
            cout << '\xC4';
        }
    }
    cout << endl;
}
void lowerBoard(){
    gotoxy(29, 22); cout <<'\xDA';
    for(int i = 0; i<48; i++){
        if(i == 47){
            cout << '\xBF';
        } else {
            cout << '\xC4';
        }
    }
    gotoxy(29, 24); cout << '\xC0';
    for(int i =  0; i<48; i++){
        if(i == 47){
            cout << '\xD9';
        } else {
            cout << '\xC4';
        }
    }
}
void box(){
    gotoxy(29,26); cout  << '\xB3' << "                                               " << '\xB3';
    gotoxy(29, 25); cout <<'\xDA';
    for(int i=0; i<48; i++){
        if(i==47){
            cout << '\xBF';
        }
        else{
            cout << '\xC4';
        }
    }

    gotoxy(29, 27);
    cout << '\xC0';
    for(int i=0; i<48; i++){
        if(i==47){
            cout << '\xD9';
        } else {
            cout << '\xC4';
        }
    }
}
void box2(){
    gotoxy(29,29); cout  << '\xB3' << "                                               " << '\xB3';
    gotoxy(29, 28); cout <<'\xDA';
    for(int i=0; i<48; i++){
        if(i==47){
            cout << '\xBF';
        }
        else{
            cout << '\xC4';
        }
    }
    gotoxy(29, 30);
    cout << '\xC0';
    for(int i=0; i<48; i++){
        if(i==47){
            cout << '\xD9';
        } else {
            cout << '\xC4';
        }
    }
}
void show(){
    gotoxy(79, 5);
    cout <<'\xDA';
    for(int i=0; i<24; i++){
        if(i==23){
            cout << '\xBF';
        }
        else if(i==17){
            cout << '\xC2';
        }
        else{
            cout << '\xC4';
        }
    }
    gotoxy(79,7);
    cout << '\xC3';
    for(int i=0; i<24; i++){
        if(i==23){
            cout << '\xB4';
        }
        else if(i==17){
            cout << '\xC5';
        }
        else{
            cout << '\xC4';
        }
    }
    for(int i=0; i<20; i++){
        gotoxy(79,i+8);
        if(i==19){
            cout << '\xC0';
            for(int j = 0; j<23; j++){
                if(j==17){
                cout << '\xC1';
                }
                else{
                    cout << '\xC4';
                }
            }
            cout << '\xD9';
        }
        else{
            cout << '\xB3' << setw(18) << '\xB3'<< setw(6) <<  '\xB3';
        }
    }

    gotoxy(79,6); cout << '\xB3' << " On Queue " << setw(8) <<'\xB3'<< setw(4) << "Qty"  << setw(2) << '\xB3';
    color(10); gotoxy(91,6); cout << "0" ;color(7); cout<<"/19"; color(7);
    gotoxy(79, 28); cout <<'\xDA';
    for(int i=0; i<24; i++){
        if(i==23){
            cout << '\xBF';
        }
        else{
            cout << '\xC4';
        }
    }
    gotoxy(79, 30);
    cout << '\xC0';
    for(int i=0; i<24; i++){
        if(i==23){
            cout << '\xD9';
        } else {
            cout << '\xC4';
        }
    }
    gotoxy(79,29); cout << '\xB3' << "Total: " << setw(17) <<'\xB3';
}
void controls(){
    gotoxy(4,10);
    cout << '\xC3';
    for(int i = 0; i<23; i++){
        if(i == 22){
            cout << '\xB4';
        } else {
            cout << '\xC4';
        }
    }
    for(int i=0; i<17; i++){
        gotoxy(4,i+11);
        if(i==16){
            cout << '\xC0';
            for(int j = 0; j<22; j++){
                cout << '\xC4';
            }
            cout << '\xD9';
        }
        else{
            cout << '\xB3' << setw(23) << '\xB3';
        }
    }
    gotoxy(4, 8);
    cout <<'\xDA';
    for(int i=0; i<23; i++){
        if(i==22){
            cout << '\xBF';
        }
        else{
            cout << '\xC4';
        }
    }
    gotoxy(4,9);
    cout << '\xB3' << setw(15) << "Controls" << setw(8) << '\xB3';

    gotoxy(6,12); cout << "> Press ";color(176);cout << "'P'"; color(7); cout << " to ";
    gotoxy(8,13); color(11); cout << "END"; color(7); cout << " queue  if";
    gotoxy(8,14); cout << "status is at";
    gotoxy(8,15); color(10);cout << "'QUEUEING ITEMS'";color(7);
    gotoxy(6,16); cout << "> Press ";color(176);cout << "'B'"; color(7); cout << " to go";
    gotoxy(8,17); color(11); cout << "BACK"; color(7); cout << " to menu if";
    gotoxy(8,18); cout << "status is at";
    gotoxy(8,19); color(10);cout << "'SELECTING STORE'";color(7);
    gotoxy(6,20); cout << "> Press ";color(176);cout << "'B'"; color(7); cout << " to ";
    gotoxy(8,21); color(11); cout << "CANCEL"; color(7); cout << " process ";
    gotoxy(8,22); cout << "and go back to ";
    gotoxy(8,23); cout << "previous process ";color(7);
    gotoxy(8,24); cout << "if status is at ";
    gotoxy(8,25); color(10);cout << "'QUEUEING ITEMS'";color(7);
    gotoxy(8,26); cout << " ";


}
void transactionBox(){
    gotoxy(4,29); cout  << '\xB3' << "                      " << '\xB3';
    gotoxy(4, 28); cout <<'\xDA';
    for(int i=0; i<23; i++){
        if(i==22){
            cout << '\xBF';
        }
        else{
            cout << '\xC4';
        }
    }
    gotoxy(4, 30);
    cout << '\xC0';
    for(int i=0; i<23; i++){
        if(i==22){
            cout << '\xD9';
        } else {
            cout << '\xC4';
        }
    }
}
int transferData (int choiceSelect,int serial){
    int total=0,list_count=0;
    int choice=1;
    char systemCommandLine[120] = "";
    char lnbuffer1[40];
    itoa(choiceSelect,lnbuffer1,10);
    strcpy(systemCommandLine, "calculate.exe ");
    strcat(systemCommandLine, lnbuffer1);
    strcat(systemCommandLine, " ");
    itoa(serial,lnbuffer1,10);
    strcat(systemCommandLine, lnbuffer1);
    total = system(systemCommandLine);
	return total;
}

