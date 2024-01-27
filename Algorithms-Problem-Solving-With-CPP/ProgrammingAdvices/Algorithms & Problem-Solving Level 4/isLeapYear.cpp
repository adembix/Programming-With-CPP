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
	if (N % 400 == 0) {
		return true;
	}
	
	else if (N % 100 == 0) {
		return false;
	}

	else if (N % 4 == 0) {
		return true;
	}

	else {
		return false;
	}

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