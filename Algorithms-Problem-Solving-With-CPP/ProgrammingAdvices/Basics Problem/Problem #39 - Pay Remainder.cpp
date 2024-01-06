#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    float totalpaid;
    float select;

    cout << "what do you buy: \n";
    cout << "1. iphone 12 pro $1000 \n";
    cout << "2. playstation 4 $250 \n";
    cout << "3. economic books $30 \n";

    cout << "select what do you need: "; cin >> select;
    cout << "Pay Now: "; cin >> totalpaid;

    system("cls");

    if(select == 1)
    {
        cout << "remainder: " << totalpaid - 1000;
    }
    else if(select == 2)
    {
        cout << "remainder: " << totalpaid - 250;
    }
    else if(select == 3)
    {
        cout << "remainder: " << totalpaid - 30;
    }

    return 0;
}
