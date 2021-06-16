#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <ctime>
#include <unistd.h>

using namespace std;

int main()
{
    ifstream in_stream;
    ofstream out_stream;

    if(mkdir("transactions") == -1);
    char text_output[120] = "";
    char lnbuffer1[40];

    in_stream.open("system_files/serial_number.txt");

    string part,full;

    while(getline(in_stream, part)){
        full = full + part;
    }
    in_stream.close();

    int serial,new_serial;
    stringstream filt(full);
    filt >> serial;

    strcpy(text_output,"transactions/transaction_");
    itoa(serial,lnbuffer1,10);
    strcat(text_output,lnbuffer1);
    strcat(text_output,".txt");

    time_t now = time(0);
    char* dt = ctime(&now);

    tm *ltm = localtime(&now);

    out_stream.open(text_output,ios_base::app);
    out_stream << "-------------------------TRANSACTION #" << serial << "-------------------------" << endl;
    out_stream << "               " << dt << endl;
    out_stream.close();

    new_serial=serial+1;
    out_stream.open("system_files/serial_number.txt");
    out_stream << new_serial;
    out_stream.close();

    out_stream.open("system_files/sequence_number.txt");
    out_stream << 0;
    out_stream.close();

    return serial;
}

