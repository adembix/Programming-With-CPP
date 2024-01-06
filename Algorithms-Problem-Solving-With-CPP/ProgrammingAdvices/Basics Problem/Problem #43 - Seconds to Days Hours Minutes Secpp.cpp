#include <iostream>
#include <cmath>
//#include <windows.h>
//#include <unistd.h>

using namespace std;

int main()
{
    long input_seconds /*= 31600000*/;
    cin >> input_seconds;

    const int cseconds_in_day = 86400;
    const int cseconds_in_hour = 3600;
    const int cseconds_in_minute = 60;
    const int cseconds = 1;

    long long days = input_seconds / cseconds_in_day;
    long hours = (input_seconds % cseconds_in_day) / cseconds_in_hour;
    long minutes = ((input_seconds % cseconds_in_day) % cseconds_in_hour) / cseconds_in_minute;
    long seconds = (((input_seconds % cseconds_in_day) % cseconds_in_hour) % cseconds_in_minute) / cseconds;
    cout << input_seconds << " seconds is " << days << ":" << hours << ":" << minutes << ":" << seconds << "";

    return 0;
}
