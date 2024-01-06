#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    int Number1,Number2;
    int replace_variable;

    cout << "enter the first number: "; cin >> Number1;

    cout << "enter the second number "; cin >> Number2;

    cout << Number1 << " | " << Number2 << "\n";
    cout << "------------------\n";

    replace_variable = Number1;
    Number1 = Number2;
    Number2 = replace_variable;

    cout << Number1 << " | " << Number2 << "\n";


    return 0;
}
