#include <iostream>
#include <string>

using namespace std;

short ReadShort(string s) {
    short Month;
    printf("\n%s", s.c_str());
    cin >> Month;
    return Month;
}

bool IsLeapYear(short Year) {
    return (((Year % 4 == 0) && (Year % 100 != 0)) || (Year % 400 == 0));
}

short DayOrderOfWeek(short Day, short Month, short Year) {
    short a = (14 - Month) / 12;
    short y = Year - a;
    short m = Month + (12 * a) - 2;
    return ((Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7);
}

short NumberOfDaysInYear(short Month, short Year) {
    if (Month < 1 || Month > 12)
        return 0;

    int NumberDaysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return ((Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberDaysInMonth[Month - 1]);
}


short NumberOfDaysFromTheBeginningOfTheYear(short Day, short Month, short Year) {
    short TotalDays = 0;
    for (int x = 1; x <= Month - 1; x++)
        TotalDays += NumberOfDaysInYear(x, Year);

    return (TotalDays + Day);
}

int main() 
{
    short Day = ReadShort("Enter a Day: ");
    short Month = ReadShort("Enter a Month: ");
    short Year = ReadShort("Enter a Year: ");

    cout << "\nNumber of Days From The Beginning of The Year is : " << NumberOfDaysFromTheBeginningOfTheYear(Day, Month, Year) << "\n\n";

    cout << "Press Any Key For Exit...";
    system("pause>0");

    return 0;
}