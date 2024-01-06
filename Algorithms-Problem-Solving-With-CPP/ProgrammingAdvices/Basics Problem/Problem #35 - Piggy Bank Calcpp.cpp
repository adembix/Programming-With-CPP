#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    float penny , nickel , dime , quarter , dollar ;
    float result;
    float totaldollars;

    cout << "enter the penny: "; cin >> penny;
    cout << "enter the nickel: "; cin >> nickel;
    cout << "enter the dime: "; cin >> dime;
    cout << "enter the quarter: "; cin >> quarter;
    cout << "enter the dollar: "; cin >> dollar;

    result = penny*1 + nickel*5 + dime*10 + quarter*25 + dollar*100;
    totaldollars = result / 100;
    cout << "pennies: " << result << "\n";
    cout << "dollars: " << totaldollars;

    return 0;
}
