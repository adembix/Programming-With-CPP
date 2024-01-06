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

void PrintInvertedLetterPattern(int Number)
{
	cout << "\n"; 

	for (int i = 65 + Number - 1 ; i >= 65; i--)
	{ 
		for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
		{
			cout << char(i); 
		}        

		cout << "\n"; 
	} 
}

int main()
{
	PrintInvertedLetterPattern(ReadPositiveNumber("Enter A Positive Number"));
}