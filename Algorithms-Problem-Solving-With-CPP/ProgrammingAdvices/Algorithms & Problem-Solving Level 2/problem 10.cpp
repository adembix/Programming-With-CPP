#include<iostream>
#include<string>
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

int CalcTimeRepeat(int Number)
{
	short Number2 = 0;
	short Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}

void DoubleReverse(int Number)
{
	string Replace = to_string(CalcTimeRepeat(Number));
	int Lenght = Replace.length();

	for (int x = Lenght; x >= 0; x--)
	{
		cout << Replace[x] << endl;
	}
}

int main()
{
	int Number = ReadPositiveNumber("Enter A Positive Number?");
	DoubleReverse(Number);
}

__________________________________________________________________________________________________

#include<iostream>
#include<string>
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

int CalcTimeRepeat(int Number)
{
	short Number2 = 0;
	short Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}

void DoubleReverse(int Number)
{
	int Replace = CalcTimeRepeat(Number);
	cout << CalcTimeRepeat(Replace) << endl;
}

int main()
{
	int Number = ReadPositiveNumber("Enter A Positive Number?");
	DoubleReverse(Number);
}

__________________________________________________________________________________________________


#include<iostream>
#include<string>
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

int CalcTimeRepeat(int Number)
{
	short Number2 = 0;
	short Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}

void DoubleReverse(int Number)
{
	int Replace = CalcTimeRepeat(Number);
	string Replace2 = to_string(CalcTimeRepeat(Replace));

	for (int x = 0; x <= Replace2.length(); x++)
		cout << Replace2[x] << endl;
}

int main()
{
	int Number = ReadPositiveNumber("Enter A Positive Number?");
	DoubleReverse(Number);
}