#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    const float pi = 3.14;
    float Lengthside;
    float area;

    cout << "enter the diameter: ";
    cin >> Lengthside;

    area = (pi * (Lengthside*Lengthside))/ 4;

    cout << "the area is: " << area;

    return 0;
}
