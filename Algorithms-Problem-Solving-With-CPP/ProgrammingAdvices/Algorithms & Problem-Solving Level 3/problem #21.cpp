
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;


void IsFibonacci(short N)
{
	
	int FebNumber = 0;
	int Prev1 = 0, Prev2 = 1;

	cout << 1 << "   ";

	for (int x = 2; x <= N; x++)
	{
		FebNumber = Prev1 + Prev2;
		cout << FebNumber << "   ";

		Prev1 = Prev2;
		Prev2 = FebNumber;

	}

	cout << endl;
}


int main()
{
	srand((unsigned)time(NULL));

	short N = 0;

	IsFibonacci(10);

	return 0;
}