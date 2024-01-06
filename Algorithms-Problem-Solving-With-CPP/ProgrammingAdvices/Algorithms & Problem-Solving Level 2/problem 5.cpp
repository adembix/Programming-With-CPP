#include<iostream>
#include<string>
using namespace std;


int ReadPositiveNumber(string message)
{
	int Number;

	cout << message << endl;
	cin >> Number;

	return Number;
}


void PrintReverseNumbers(int Number)
{
	int remainder = 0;
	int result = 0;

	while (Number > 0)
	{
		remainder = Number % 10;
		Number = Number / 10;
		cout << remainder << endl; // for problem 5
			result += remainder; // for problem 6
	}

	cout << endl << "addition is: " << result << endl; // for problem 6
}


int main()
{
	PrintReverseNumbers(ReadPositiveNumber("Enter A Number?"));
}