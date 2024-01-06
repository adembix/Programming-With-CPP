
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;


void PrintFibonacciUsingRecurssion(short Number, int Prev1, int Prev2)
{
	
	int FebNumber = 0;

	if (Number > 0)
	{
		FebNumber = Prev1 + Prev2;
		cout << FebNumber << "   ";
		Prev1 = Prev2;
		Prev2 = FebNumber;

		PrintFibonacciUsingRecurssion(Number - 1, Prev1, Prev2);
	}

}


int main()
{
	srand((unsigned)time(NULL));

	PrintFibonacciUsingRecurssion(10, 1, 0);

	system("pause>0");
}