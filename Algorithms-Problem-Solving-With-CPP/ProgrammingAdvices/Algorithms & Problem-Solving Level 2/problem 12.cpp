my sulation

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

void CalcNumbers(int Number)
{
	for (int x = Number; x >= 1; x--)
	{
		for (int i = Number; i >= 1; i--)
		{
			cout << x;
		}

		Number--;
		cout << endl;
	}
}

int main()
{
	CalcNumbers(ReadPositiveNumber("Enter A Positive Number"));
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

void CalcNumbers(int Number)
{
	for (int x = Number; x >= 1; x--)
	{
		for (int i = 1; i <= x; i++)
		{
			cout << x;
		}
		cout << endl;
	}
}

int main()
{
	CalcNumbers(ReadPositiveNumber("Enter A Positive Number"));
}