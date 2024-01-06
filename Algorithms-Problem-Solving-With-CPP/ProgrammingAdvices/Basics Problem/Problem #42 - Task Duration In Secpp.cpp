#include <iostream>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int  main()
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds = 60;
    int totalseconds;

    cout << "number of days: "; cin >> NumberOfDays;
    cout << "number of hours: "; cin >> NumberOfHours;
    cout << "number of minutes: "; cin >> NumberOfMinutes;
    cout << "number of seconds: "; cin >> NumberOfSeconds;

    totalseconds = (NumberOfDays * 24 * 60 * 60) + (NumberOfHours * 60 *60) + (NumberOfMinutes * 60) + (NumberOfSeconds);
    cout << "total seconds is: " << totalseconds;

    return 0;
}
