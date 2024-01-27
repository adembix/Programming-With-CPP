#include<iostream>
using namespace std;


short ReadNum(string T)
{
	short N = 0;
	cout << T;
	cin >> N;
	return N;
}

bool IsLeapYear(short Y)
{
	return (Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0);
}

short DaysInMonth(short Y , short M)
{
	short NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return  (M < 1 || M > 12) ? 0 : ((M == 2) ? (IsLeapYear(Y) ? 29 : 28) : NumberOfDays[M - 1]);
}

int main()
{
	short Y = ReadNum("Enter A Year : ");
	short M = ReadNum("Enter A Month : ");

	cout << "\nNumber of Days in Month [" << Y << "] is : "
		<< DaysInMonth(Y,M) << endl;

	return 0;
}