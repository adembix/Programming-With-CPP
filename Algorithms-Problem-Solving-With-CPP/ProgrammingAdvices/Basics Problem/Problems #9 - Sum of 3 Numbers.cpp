#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    int Number1,Number2,Number3;
    int sum;

    cout << "enter the first number: "; cin >> Number1;

    cout << "enter the second number: "; cin >> Number2;

    cout << "enter the threed number: "; cin >> Number3;

    sum = Number1 + Number2 + Number3;

    cout << "result is: " << sum;

    return 0;
}
