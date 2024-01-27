#include<iostream>
using namespace std;


short ReadNum(string T)
{
	short N = 0;
	cout << T;
	cin >> N;
	return N;
}

bool IsLeapYear(short N)
{

	return (N % 4 == 0 && N % 100 != 0) || (N % 400 == 0);

}

short DaysInMonth(short Y, short M)
{
	
	if (M < 1 || M > 12)
		return 0;

	if (M == 2)
	{
		return (IsLeapYear(Y)) ? 29 : 28;
	}

	short arrMonths[7] = { 1,3,5,7,8,10,12 };

	for (int x = 1; x <= 7; x++)
	{
		if (arrMonths[x - 1] == M)
		{
			return 31;
		}
	}

	return 30;

}

short HoursInMonth(short Y, short M)
{
	return DaysInMonth(Y,M) * 24;
}

int MinutesInMonth(short Y, short M)
{
	return HoursInMonth(Y, M) * 60;
}

int SecondsInMonth(short Y, short M)
{
	return MinutesInMonth(Y,M) * 60;
}

int main()
{

	short Y = ReadNum("Enter A Year : ");
	short M = ReadNum("Enter A Month : ");

	cout << "\nNumber of Days in Month    [" << Y << "] is : "
		<< DaysInMonth(Y,M);

	cout << "\nNumber of Hours in Month   [" << Y << "] is : "
		<< HoursInMonth(Y, M);

	cout << "\nNumber of Minutes in Month [" << Y << "] is : "
		<< MinutesInMonth(Y, M);

	cout << "\nNumber of Minutes in Month [" << Y << "] is : "
		<< SecondsInMonth(Y, M) << endl;

	return 0;
}