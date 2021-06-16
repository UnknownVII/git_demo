#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <iomanip>



using namespace std;

int main(int argc, char* argv[])
{
    //cout << "p_end is running!" << endl;

    ofstream out_stream;


    int id,qt,item_sum,full_total,serial;
    char lnbuffer1[40];
    char text_output[120] = "";

    strcpy(lnbuffer1,argv[1]);
    full_total = atoi(lnbuffer1);
    strcpy(lnbuffer1,argv[2]);
    serial = atoi(lnbuffer1);

    strcpy(text_output,"transactions/transaction_");
    itoa(serial,lnbuffer1,10);
    strcat(text_output,lnbuffer1);
    strcat(text_output,".txt");

    out_stream.open(text_output,ios_base::app);
    out_stream << endl << "-----------------------------------------------TOTAL:" << setw(9) << right << full_total << ".00"<< endl;
    out_stream.close();


    out_stream.open("system_files/sequence_number.txt");
    out_stream << 0;
    out_stream.close();


}
