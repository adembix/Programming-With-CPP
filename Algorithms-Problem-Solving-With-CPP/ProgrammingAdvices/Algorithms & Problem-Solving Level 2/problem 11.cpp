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


int CalcNumbers(int Number)
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

void PrintResult(int Number)
{
	if (CalcNumbers(Number) == Number)
		cout << Number << " is a Palindrame Number.";
	else
		cout << Number << " is Not a Palindrame Number.";
}

int main()
{
	int Number = ReadPositiveNumber("Enter A Positive Number?");
	PrintResult(Number);
}

________________________________________________________________________________________________________________________


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


bool CalcNumbers(int Number)
{
	short Number2 = 0;
	short Remainder = 0;
	int Num = Number;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2 == Num;
}

void PrintResult(int Number)
{
	if (CalcNumbers(Number))
		cout << Number << " is a Palindrame Number.";
	else
		cout << Number << " is Not a Palindrame Number.";
}

int main()
{
	int Number = ReadPositiveNumber("Enter A Positive Number?");
	PrintResult(Number);
}


________________________________________________________________________________________________________________________


teatcher sulation

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


int CalcNumbers(int Number)
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

bool isPalindrame(int Number)
{
	return Number == CalcNumbers(Number);
}

int main()
{
	if (isPalindrame(ReadPositiveNumber("Enter A Positive Number?")))
		cout << "Yes is A Palindrame Number.";
	else
		cout << "No is Not A Palindrame Number.";
}