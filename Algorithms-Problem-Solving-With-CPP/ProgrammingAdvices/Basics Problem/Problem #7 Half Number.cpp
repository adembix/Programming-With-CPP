#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    int number;
    int HalfOfNumber;

    cout << "enter the number: ";
    cin >> number;

    HalfOfNumber = number / 2;

    cout << "half of " << number << " is " << HalfOfNumber << "\n";

    return 0;
}
