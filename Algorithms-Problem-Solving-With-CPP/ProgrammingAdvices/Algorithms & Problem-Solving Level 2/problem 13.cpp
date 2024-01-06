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
	

	for (int x = 1; x <= Number; x++)
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