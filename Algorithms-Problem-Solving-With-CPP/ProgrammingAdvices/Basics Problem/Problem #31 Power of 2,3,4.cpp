#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    int number;

    cout << "enter the number: ";
    cin >> number;

    cout << number << " ^ 2: " << number * number << "\n";
    cout << number << " ^ 3: " << number * number * number << "\n";
    cout << number << " ^ 4: " << number * number * number * number << "\n";

    return 0;
}
