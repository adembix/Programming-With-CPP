my solve

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
	int condition = ReadPositiveNumber("Select Number?");
	int counter = 0;

	while (Number > 0)
	{
		remainder = Number % 10;
		Number /= 10;

		if (condition == remainder)
			counter++;
	}
	return counter;
}

int main()
{
	cout << "\nTotal is: " << PrintResult(ReadPositiveNumber("Enter A Positive Number?")) << endl;
}


______________________________________________________________________


#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) 
{
    int Number = 0;

    do 
    {
        cout << Message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

int CountDigitFrequency(short DigitToCheck, int Number)
{
    short Counter = 0; int Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (Remainder == DigitToCheck)
            Counter++;
    }

    return Counter;
}

int main()
{

    int Number = ReadPositiveNumber("Please enter the main number?");
    short DigitToCheck = ReadPositiveNumber("Please enter one digit to check?");

    cout << "\nDigit " << DigitToCheck << " Frequency is " << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";

    return 0;
}

______________________________________________________________________

teatcher solve


#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) 
{
    int Number = 0;

    do 
    {
        cout << Message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

int CountDigitFrequency(int DigitToCheck, int Number) 
{
    int FreqCount = 0, Remainder = 0;

    while (Number > 0) 
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (DigitToCheck == Remainder) {
            FreqCount++;
        }
    }
    return FreqCount;
}


int main()
{

    int Number = ReadPositiveNumber("Please enter the main number?");
    short DigitToCheck = ReadPositiveNumber("Please enter one digit to check?");

    cout << "\nDigit " << DigitToCheck << " Frequency is " << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";

    return 0;
}