#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    const float pi = 3.14;
    float ocean;
    float area;

    cout << "enter the ocean: ";
    cin >> ocean;

    area = (ocean*ocean) / (pi*4);

    cout << "the area is: " << area;

    return 0;
}
