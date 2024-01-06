#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    float totalbill;
    float billvalue;

    cout << "enter the bill: ";
    cin >> billvalue;

    totalbill = billvalue * 1.1;
    totalbill = totalbill * 1.16;

    cout << "total bill is: " << totalbill;


    return 0;
}
