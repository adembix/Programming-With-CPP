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

int isPerfectNumber(int Number)
{
	int Sum = 0;

	for (int x = 1; x < Number ; x++)
	{
		if (Number % x == 0)
			Sum += x;
	}

	return Sum == Number;
}


void PrintPerfectNumber(int Number)
{

	for (int i = 1; i <= Number; i++)
	{
		if (isPerfectNumber(i))
			cout << i << endl;
	}
}

int main()
{
	PrintPerfectNumber(ReadPositiveNumber("Enter A Positive Number?"));
}