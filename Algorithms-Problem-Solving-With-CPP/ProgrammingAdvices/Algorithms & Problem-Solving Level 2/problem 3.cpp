#include<iostream>
using namespace std;


int ReadPositiveNumber(string message)
{
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;

	} while (Number < 1);

	return Number;
}

bool isPositiveNumber(int Number)
{
	int Sum = 0;
	for (int x = 1; x < Number; x++)
	{
		if (Number % x == 0)
			Sum += x;
	}

	return Sum == Number;
}

void PrintResult(int Number)
{
	if (isPositiveNumber(Number))
		cout << Number << " is A Perfect Number";
	else
		cout << Number << " is Not A Perfect Number";
}

int main()
{
	PrintResult(ReadPositiveNumber("Enter A Positive Number?"));
}