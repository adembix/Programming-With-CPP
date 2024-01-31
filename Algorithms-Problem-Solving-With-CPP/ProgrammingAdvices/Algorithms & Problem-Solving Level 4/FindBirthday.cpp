#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int ReadNum(string t) {
	int N = 0;
	cout << t;
	cin >> N;
	return N;
}

short DayOfWeekOrder(short day, short month, short year) {
	int a = ((14 - month) / 12);
	short y = year - a;
	short m = month + 12 * a - 2;

	return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayName(short n) {

	string arr[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	return arr[n];
}


int main()
{
	int D = ReadNum("Enter a Day : ");
	int M = ReadNum("Enter a Month : ");
	int Y = ReadNum("Enter a Year : ");

	cout << "\n========= Birthday =========\n";
	cout << D << "/" << M << "/" << Y << "\n";
	cout << "Day Order : " << DayOfWeekOrder(D, M, Y) << "\n";
	cout << "Day Name : " << DayName(DayOfWeekOrder(D, M, Y)) << "\n";

	return 0;
}