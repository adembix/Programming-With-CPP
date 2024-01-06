#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    int TheBase,Height;
    int area;

    cout << "the base: "; cin >> TheBase;
    cout << "Height: "; cin >> Height;

    area = (TheBase/2) * Height;

    cout << "the area is: " << area;

    return 0;
}
