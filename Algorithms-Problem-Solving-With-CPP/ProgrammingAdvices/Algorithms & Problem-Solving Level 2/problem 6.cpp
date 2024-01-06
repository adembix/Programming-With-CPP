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


int PrintReverseNumbers(int Number)
{
	int remainder = 0;
	int result = 0;

	while (Number > 0)
	{
		remainder = Number % 10;
		Number = Number / 10;
		result += remainder; // for problem 6
	}

	return result;
}


int main()
{
	cout << endl << "addition is: " << PrintReverseNumbers(ReadPositiveNumber("Enter A Number?"));
}