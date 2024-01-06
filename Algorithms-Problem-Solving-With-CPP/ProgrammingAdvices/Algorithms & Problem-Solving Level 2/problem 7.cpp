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


int PrintResult(int Number)
{
	int remainder = 0;
	int reverse = 0;

	while (Number > 0)
	{
		remainder = Number % 10;
		Number /= 10;
		reverse = reverse * 10  + remainder;
	}
	return reverse;
}

int main()
{
	cout << "Reverse is: " << PrintResult(ReadPositiveNumber("Enter A Positive Number?"));
}