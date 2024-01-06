#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    int Number1,Number2;
    int area;

    cout << "enter the first number: "; cin >> Number1;
    cout << "enter the first number: "; cin >> Number2;

    area = Number1 * Number2;

    cout << "the area is: " << area;

    return 0;
}
