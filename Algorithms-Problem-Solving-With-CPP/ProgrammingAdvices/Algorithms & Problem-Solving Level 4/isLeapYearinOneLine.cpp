#include<iostream>
using namespace std;

short ReadNum()
{
	short N = 0;
	cout << "Enter a Number: ";
	cin >> N;
	return N;
}

bool IsLeapYear(int N)
{

	return ((N % 4 == 0) && (N % 100 != 0)) || (N % 400 == 0);

}

int main()
{

	short n = ReadNum();

	if (IsLeapYear(n))
		cout << "Yes, Year [" << n << "] is a Leap Year.\n";
	else
		cout << "No, Year [" << n << "] is Not a Leap Year.\n";

	return 0;
}