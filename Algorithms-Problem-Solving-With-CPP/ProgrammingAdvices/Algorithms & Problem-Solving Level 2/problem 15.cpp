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

void LetterPattern(int Number)
{
	for (int x = 65 ; x <= 65 + Number - 1; x++)
	{
		for (int j = 1; j <= x - 65 + 1; j++)
		{
			cout << char(x);
		}
		cout << endl;
	}

}


int main()
{
	LetterPattern(ReadPositiveNumber("Enter A Positive Number From 1 To 26"));
}