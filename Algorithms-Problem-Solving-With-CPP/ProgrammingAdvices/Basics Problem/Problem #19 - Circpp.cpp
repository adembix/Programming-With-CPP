#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    const float pi = 3.14;
    float Diameter;
    float area;

    cout << "enter the diameter: ";
    cin >> Diameter;

    area = (pi * (Diameter*Diameter))/ 4;

    cout << "the area is: " << area;

    return 0;
}