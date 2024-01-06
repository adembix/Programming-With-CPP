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

void PrintAllDigitsFrequency(int Number)
{
    cout << endl;
    for (int x = 0; x < 10; x++)
    {
        short DigitFrequecy = CountDigitFrequency(x, Number);
        
        if (DigitFrequecy > 0)
            cout << "\nDigit " << x << " Frequency is " << CountDigitFrequency(x, Number) << " Time(s).\n";
    }
}

int main()
{

    int Number = ReadPositiveNumber("Please enter the main number?");

    PrintAllDigitsFrequency(Number);

    return 0;
}