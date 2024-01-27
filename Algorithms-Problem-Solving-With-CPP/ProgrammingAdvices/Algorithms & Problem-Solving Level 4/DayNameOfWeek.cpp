#include<iostream>
#include<string>
using namespace std;

short ReadNum(string T)
{
	short N = 0;
	cout << T;
	cin >> N;
	return N;
}

short DayInWeek(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;

	// 1: Sun, 2: Mon, 3: Tue... etc
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayName(short n)
{
	string arrDays[7] = { "Sun" , "Mon", "Tue", "Wen", "Thu", "Fri", "Sat" };
	return (n < 1 || n > 7) ? "Error" : (arrDays[n - 1]);
}


int main()
{

	short Y = ReadNum("Enter A Year : ");
	short M = ReadNum("Enter A Month : ");
	short D = ReadNum("Enter A Day : ");

	short N_Day = DayInWeek(D, M, Y);

	cout << "\nDate      : " << D << "/" << M << "/" << Y;
	cout << "\nDay Order : " << N_Day;
	cout << "\nDay Name  : " << DayName(N_Day);

	return 0;
}