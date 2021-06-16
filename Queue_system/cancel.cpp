#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <stdio.h>

using namespace std;

int main()
{
    ifstream in_stream;
    ofstream out_stream;

    char text_output[120] = "";
    char lnbuffer1[120] = "";

    in_stream.open("system_files/serial_number.txt");

    string part,full;

    while(getline(in_stream, part)){
        full = full + part;
    }
    in_stream.close();

    int serial;
    stringstream filt(full);
    filt >> serial;

    serial = serial - 1;

    strcpy(text_output,"transactions/transaction_");
    itoa(serial,lnbuffer1,10);
    strcat(text_output,lnbuffer1);
    strcat(text_output,".txt");

    remove(text_output);

    out_stream.open("system_files/serial_number.txt");
    out_stream << serial;
    out_stream.close();
}
