#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
    ofstream out_stream;
    int id,qt,item_sum,full_total,serial=0;
    char lnbuffer1[40];
    char text_output[120] = "";
    strcpy(lnbuffer1,argv[1]);

    id = atoi(lnbuffer1);
    strcpy(lnbuffer1,argv[2]);

    qt = atoi(lnbuffer1);
    strcpy(lnbuffer1,argv[3]);

    item_sum = atoi(lnbuffer1);
    strcpy(lnbuffer1,argv[4]);

    serial = atoi(lnbuffer1);
    strcpy(text_output,"transactions/transaction_");

    itoa(serial,lnbuffer1,10);
    strcat(text_output,lnbuffer1);
    strcat(text_output,".txt");
    out_stream.open(text_output,ios_base::app);
    switch (id) {
        case 1: out_stream  << " Portable Chargers--------------------680.00  * ";
                break;
        case 2: out_stream  << " Selfie Sticks------------------------49.00   * ";
                break;
        case 3: out_stream  << " USB OTG Flash Drives-----------------252.00  * ";
                break;
        case 4: out_stream  << " Headphones---------------------------699.00  * ";
                break;
        case 5: out_stream  << " Bluetooth Earbuds--------------------155.00  * ";
                break;
        case 6: out_stream  << " Smartwatches-------------------------99.00   * ";
                break;
        case 7: out_stream  << " Gaming Controllers-------------------445.00  * ";
                break;
        case 8: out_stream  << " Portable Bluetooth Speakers----------399.00  * ";
                break;
        case 9: out_stream  << " Headphone Adapter--------------------27.00   * ";
                break;
        case 10: out_stream << " Phone Ring Holder--------------------35.00   * ";
                break;
        case 11: out_stream << " Face Primer--------------------------91.00   * ";
                break;
        case 12: out_stream << " Foundation---------------------------45.00   * ";
                break;
        case 13: out_stream << " BB Cream-----------------------------190.00  * ";
                break;
        case 14: out_stream << " Concealer----------------------------49.00   * ";
                break;
        case 15: out_stream << " Blush--------------------------------100.00  * ";
                break;
        case 16: out_stream << " Highlighter--------------------------128.00  * ";
                break;
        case 17: out_stream << " Bronzer------------------------------180.00  * ";
                break;
        case 18: out_stream << " Setting Powder-----------------------168.00  * ";
                break;
        case 19: out_stream << " Eye Primer---------------------------100.00  * ";
                break;
        case 20: out_stream << " Eyeshadow----------------------------160.00  * ";
                break;
        case 21: out_stream << " Coffee maker-------------------------899.00  * ";
                break;
        case 22: out_stream << " Blender------------------------------649.00  * ";
                break;
        case 23: out_stream << " Mixer--------------------------------180.00  * ";
                break;
        case 24: out_stream << " Toaster------------------------------850.00  * ";
                break;
        case 25: out_stream << " Microwave----------------------------3650.00 * ";
                break;
        case 26: out_stream << " Crock pot----------------------------3000.00 * ";
                break;
        case 27: out_stream << " Rice cooker--------------------------350.00  * ";
                break;
        case 28: out_stream << " Pressure cooker----------------------1119.00 * ";
                break;
        case 29: out_stream << " Stove--------------------------------2000.00 * ";
                break;
        case 30: out_stream << " Lamp---------------------------------39.00   * ";
                break;
        default: break;
    }
    out_stream << setw(2) << qt << " = " << setw(11) << right << item_sum << ".00 "<< endl ;
    out_stream.close();
}
