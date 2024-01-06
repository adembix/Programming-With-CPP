#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    const float pi = 3.14;
    float thebase,tolDil3;
    float area;

    cout << "enter the base: ";
    cin >> thebase;
    cout << "enter el dil3: ";
    cin >> tolDil3;

    area = (pi * (thebase*thebase)/4) * ((2* tolDil3 - thebase) / (2* tolDil3 + thebase));


    cout << "the area is: " << area;

    return 0;
}
