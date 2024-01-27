#include<iostream>
using namespace std;


short ReadNum()
{
	short N = 0;
	cout << "Enter a Year: ";
	cin >> N;
	return N;
}

bool IsLeapYear(short N)
{

	return (N % 4 == 0 && N % 100 != 0) || (N % 400 == 0);

}

short DaysInYear(short N)
{
	return IsLeapYear(N) ? 366 : 365;
}

short HoursInYear(short N)
{
	return DaysInYear(N) * 24;
}

int MinutesInYear(short N)
{
	return HoursInYear(N) * 60;
}

int SecondsInYear(short N)
{
	return MinutesInYear(N) * 60;
}

int main()
{

	short N = ReadNum();

	cout << "\nNumber of Days in Year    [" << N << "] is : " 
		<< DaysInYear(N);

	cout << "\nNumber of Hours in Year   [" << N << "] is : "
		<< HoursInYear(N);

	cout << "\nNumber of Minutes in Year [" << N << "] is : "
		<< MinutesInYear(N);

	cout << "\nNumber of Minutes in Year [" << N << "] is : "
		<< SecondsInYear(N) << endl;

	return 0;
}