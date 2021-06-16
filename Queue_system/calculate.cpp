#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "library.h"

using namespace std;
void box();

int main(int argc, char* argv[]){
    int Set[] = {7,7,7,7,7,7,7,7,7,7};
    int price[30] = { 680 , 49 , 252 , 699 , 155 , 99 , 445 , 399 , 27 , 35 , 91 , 45 , 190 , 49 , 100 , 128 , 180 , 168 , 100 , 160 , 899 , 649 , 180 , 850 , 3650 , 3000 , 350 , 1119 , 2000 , 39 };
    int counter = 1, colorSelect = 176, listCount_increment =  0;
    int id,qt,item_price=0,full_total=0,serial=0,temp_id=1;
    char key;
    char lnbuffer1[40];
    char systemCommandLine[120] = "";
    unsigned int fileSeq;
    string fileName;
    ifstream seqFileIn;
    ofstream seqFileOut;

    seqFileIn.open("system_files/sequence_number.txt", ios::in);

    // If "sequenceFile.txt" exists, read the last sequence from it and increment it by 1.
    if (seqFileIn.is_open())
    {
        seqFileIn >> fileSeq;
        if(fileSeq >= 19){
            fileSeq = 1;
        } else {
            fileSeq++;
        }

    }
    else


    fileSeq = 1; // if it does not exist, start from sequence 1.
    seqFileOut.open("system_files/sequence_number.txt", ios::out);
    seqFileOut << fileSeq;
    seqFileOut.close();
//    return 0;




    gotoxy(31,26); cout << "Enter quantity: ";
    Set[0] = colorSelect;
    //DEFAULT COLOR
    for(int i=1; i<=10; i++){
        Set[i] = 128;
    }
    while(1){
        color(Set[0]); gotoxy(47,26); cout << "1";
        color(Set[1]); gotoxy(49,26); cout << "2";
        color(Set[2]); gotoxy(51,26); cout << "3";
        color(Set[3]); gotoxy(53,26); cout << "4";
        color(Set[4]); gotoxy(55,26); cout << "5";
        color(Set[5]); gotoxy(57,26); cout << "6";
        color(Set[6]); gotoxy(59,26); cout << "7";
        color(Set[7]); gotoxy(61,26); cout << "8";
        color(Set[8]); gotoxy(63,26); cout << "9";
        color(Set[9]); gotoxy(65,26); cout << "10";

        key = _getch();
        if (key == 75 && (counter >=2 && counter <=10)){
            counter --;
        }
        if (key == 77 && (counter >=1 && counter <=9)){
            counter ++;
        }
        if(key == '\r'){
            //listCount_increment++;
            gotoxy(100,7+fileSeq); cout << counter;
            color(7); gotoxy(30,26); cout << "-----------------------------------------------";
            //increment++
            break;
        } else if(key == 'b'){
            temp_id = 0;
            seqFileOut.open("system_files/sequence_number.txt", ios::out);
            seqFileIn >> fileSeq;
            fileSeq--;
            seqFileOut << fileSeq;
            seqFileOut.close();
            color(7); gotoxy(30,26); cout << "-----------------------------------------------";
            break;
        }
        /*
        if(key == 'b'){
            temp_id = 0;
            break;
        }*/
        //DEFAULT COLOR
        for(int i=0; i<=10; i++){
            Set[i] = 128;
        }
        //COLOR SELECT
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


    if (temp_id!=0){
        strcpy(lnbuffer1,argv[1]);
        id = atoi(lnbuffer1);
        item_price = 0;
    }
    strcpy(lnbuffer1,argv[2]);
    serial = atoi(lnbuffer1);

    if (id!=0){
        qt = counter;
        item_price = counter*price[id-1];
        itoa(id,lnbuffer1,10);
        strcpy(systemCommandLine, "print_transactions.exe ");
        strcat(systemCommandLine, lnbuffer1);
        itoa(qt,lnbuffer1,10);
        strcat(systemCommandLine, " ");
        strcat(systemCommandLine, lnbuffer1);
        itoa(item_price,lnbuffer1,10);
        strcat(systemCommandLine, " ");
        strcat(systemCommandLine, lnbuffer1);
        itoa(serial,lnbuffer1,10);
        strcat(systemCommandLine, " ");
        strcat(systemCommandLine, lnbuffer1);
        system(systemCommandLine);
    }
    return (item_price);
}



