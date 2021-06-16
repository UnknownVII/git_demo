#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <fstream>
#include <iomanip>
#include "library.h"
#include <limits>

using namespace std;

void leftBox();
void rightBox();
void clearBox();
void clearNameBar();

int main(){
    int xxx = 900,yyy = 620;
    int pass =0;
    SetConsoleTitle("Transactions");
    window_Size(xxx,yyy);
    setCenterConsole(xxx,yyy);
    backgroundLarge(300);
    color(7);
    rightBox();
    leftBox();
    int x=0,y=0,key,max_serial,search_value;
    ifstream in_stream, in_stream2;
    string temp;

    char lnbuffer1[40]="";
    char payload[]="transactions/transaction_";
    char text_output[120] = "";

    int Set[] = {7,7,7,7,7,7,7,7,7,7};
    int colorSelect = 176;

    Set[0] = colorSelect;

    in_stream2.open("system_files/serial_number.txt");
    in_stream2 >> max_serial;
    in_stream2.close();


    x=1;

    strcpy(text_output,payload);
    itoa(x,lnbuffer1,10);
    strcat(text_output,lnbuffer1);
    strcat(text_output,".txt");
    in_stream2.open(text_output);

    if (!in_stream2){
        color(12); gotoxy(16,5); cout << "transaction_" << "1" << ".txt"; color(7);
        gotoxy(6,7); color(12); cout << "ERROR 404: "; color(7); cout << "FILE NOT FOUND";
    } else {
        color(7); gotoxy(16,5); cout << "transaction_" << "1" << ".txt"; color(7);
        for (int i=0;i<30;i++){
            getline(in_stream2, temp);
            if((i>=(y)&&i<(y+26))){
                gotoxy(6,7+i); cout << temp;
            }
        }
    }

    in_stream2.close();
    while(1){
        strcpy(text_output,payload);
		key = _getch();
        if (key == 75){
            x--;
            color(7);
            clearBox();
            clearNameBar();

            if(x>max_serial||x<1){
                if(x<1){
                    color(7);
                    x=1;
                }
                color(Set[1]);
                gotoxy(16,5); cout << "transaction_" << x << ".txt";
                gotoxy(28,5); color(7);; cout << x;


            } else {
                color(Set[1]);
                gotoxy(16,5); cout << "transaction_" << x << ".txt"; color(7);
            }


            itoa(x,lnbuffer1,10);
            strcat(text_output,lnbuffer1);
            strcat(text_output,".txt");
            in_stream.open(text_output);

            if (!in_stream){
                color(12); gotoxy(16,5); cout << "transaction_" << x << ".txt"; color(7);
                gotoxy(6,7); color(12); cout << "ERROR 404: "; color(7); cout << "FILE NOT FOUND";
            } else {
                color(7);
                for (int i=0;i<30;i++){
                    getline(in_stream, temp);
                    if((i>=(y)&&i<(y+26))){
                        gotoxy(6,7+i); cout << temp;
                    }
                }
            }
            in_stream.close();
        } else if (key == 77){
            x++;
            color(7);
            clearBox();
            clearNameBar();

            if(x>=max_serial){
                gotoxy(16,5); cout << "transaction_" << x << ".txt";
                gotoxy(28,5); color(Set[0]); cout << x;
                color(Set[1]);

            } else {
                color(12); gotoxy(16,5); cout << "transaction_" << x << ".txt"; color(7);
            }

            itoa(x,lnbuffer1,10);
            strcat(text_output,lnbuffer1);
            strcat(text_output,".txt");
            in_stream.open(text_output);

            gotoxy(16,5); cout << "transaction_" << x << ".txt";
            if (!in_stream){
                color(12); gotoxy(16,5); cout << "transaction_" << x << ".txt"; color(7);
                gotoxy(6,7); color(12); cout << "ERROR 404: "; color(7); cout << "FILE NOT FOUND";
            } else {
                for (int i=0;i<30;i++){
                    getline(in_stream, temp);
                    if((i>=(y)&&i<(y+26))){
                        gotoxy(6,7+i); cout << temp;
                    }
                }
            }
            in_stream.close();
        } else if (key == 's'){
            gotoxy(88,5);
            //cin >> search_value;
            while (true){
            gotoxy(81,5); cout << "SEARCH:"; color(Set[0]); cout << "              ";//color(Set[7]);
            gotoxy(89,5); cin >> search_value;
                if (!cin){
                    gotoxy(81,5); color(7); cout << "SEARCH: "; color(12); cout << "Invalid input"; color(7);
                    Sleep(1000);
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                } else {
                    color(Set[1]);
                    gotoxy(81,5); cout << "SEARCH:"; color(7); cout << "               ";
                    x = search_value;
                    clearBox();
                    clearNameBar();

                    itoa(search_value,lnbuffer1,10);
                    strcat(text_output,lnbuffer1);
                    strcat(text_output,".txt");
                    in_stream.open(text_output);
                    gotoxy(16,5); cout << "transaction_" << search_value << ".txt";

                    if ( (search_value > max_serial || search_value <= 0) || !in_stream ){
                        color(12); gotoxy(16,5); cout << "transaction_" << x << ".txt"; color(7);
                        gotoxy(6,7); color(12); cout << "ERROR 404: "; color(7); cout << "FILE NOT FOUND";
                    } else {
                        for (int i=0;i<30;i++){
                            getline(in_stream, temp);
                            if((i>=(y)&&i<(y+26))){
                                gotoxy(6,7+i); cout << temp;
                            }
                        }
                    }

                }
                break;
            }
        } else if (key == 'b'){
            color(7);
            system("cls");
            system("startup.exe");
            break;
        } else if (key == 'o'){
            system("start explorer transactions");
            //break;
        }
        Set[0] = colorSelect;
        in_stream.close();
	}
}

void leftBox(){

    gotoxy(4, 4);
    cout <<'\xDA';
    for(int i=0; i<73; i++){
        if(i==72){
            cout << '\xBF';
        }
        else{
            cout << '\xC4';
        }
    }
    gotoxy(4, 5); cout << '\xB3' << " FILENAME:" << setw(63) << '\xB3';
    gotoxy(4,6);
    cout << '\xC3';
    for(int i = 0; i<73; i++){
        if(i == 72){
            cout << '\xB4';
        } else {
            cout << '\xC4';
        }
    }
    for(int i=0; i<25; i++){
        gotoxy(4,i+7);
        if(i==24){
            cout << '\xC0';
            for(int j = 0; j<72; j++){
                cout << '\xC4';
            }
            cout << '\xD9';
        }
        else{
            cout << '\xB3' << setw(73) << '\xB3';
        }
    }
}
void rightBox(){
    gotoxy(79, 4);
    cout <<'\xDA';
    for(int i=0; i<24; i++){
        if(i==23){
            cout << '\xBF';
        }
        else{
            cout << '\xC4';
        }
    }
    gotoxy(79, 5); cout << '\xB3' << " SEARCH: "<< setw(15) << '\xB3';
    gotoxy(79,6);
    cout << '\xC0';
    for(int i = 0; i<24; i++){
        if(i == 23){
            cout << '\xD9';
        } else {
            cout << '\xC4';
        }
    }






    gotoxy(79, 7);
    cout <<'\xDA';
    for(int i=0; i<24; i++){
        if(i==23){
            cout << '\xBF';
        }
        else{
            cout << '\xC4';
        }
    }
    gotoxy(79,9);
    cout << '\xC3';
    for(int i=0; i<24; i++){
        if(i==23){
            cout << '\xB4';
        }
        else{
            cout << '\xC4';
        }
    }
    for(int i=0; i<22; i++){
        gotoxy(79,i+10);
        if(i==21){
            cout << '\xC0';
            for(int j = 0; j<23; j++){
                    cout << '\xC4';

            }
            cout << '\xD9';
        }
        else{
            cout << '\xB3' << setw(24) <<  '\xB3';
        }
    }
    gotoxy(79,8); cout << '\xB3' << setw(14) << "GUIDE"  << setw(10) << '\xB3';
    gotoxy(81,11); cout << "> Press "; color(176);cout << "'B'"; color(7);cout << " to";
    gotoxy(84,12); cout << "go"; color(11);cout << " Back"; color(7);cout << " to menu";
    gotoxy(81,14); cout << "> Press "; color(176);cout << "'S'"; color(7);cout << " to"; color(11);cout << " Search"; color(7);
    gotoxy(84,15); cout << "-Enter only number";
    gotoxy(81,17); cout << "> Press "; color(176);cout << "'O'"; color(7);cout << " to"; color(11);cout << " Open"; color(7);
    gotoxy(83,18); cout << "-Transaction Folder";
    gotoxy(4,33); cout << "----------USE LEFT/RIGHT ARROW KEYS, TO CYCLE FROM TRANSACTION/S----------"; color(7);
    //gotoxy(83,21); cout << "-Transaction Folder";
}
void clearBox(){
    for (int i=0;i<26;i++){
        if((i>=0&&i<24)){
            gotoxy(5,7+i); cout << setw(72) << "" ;
        }
    }
}
void clearNameBar(){
    gotoxy(5,5); cout << " FILENAME:" << setw(62) << "";
}
