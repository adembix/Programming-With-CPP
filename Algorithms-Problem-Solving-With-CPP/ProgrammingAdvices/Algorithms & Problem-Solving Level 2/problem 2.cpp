#include <iostream>
using namespace std;

enum enChecker { Prime = 1, NotPrime = 2 };

int ReadNumber(string Text)
{
	int N;

	do {
		cout << Text;
		cin >> N;

	} while (N < 1);

	return N;
}

enChecker CheckPrimeOrNot(int N)
{

	for (int x = 2; x <= N / 2; x++)
		if (N % x == 0)
			return enChecker::NotPrime;

	return enChecker::Prime;
}



void PrintOnlyPrime(int N)
{
	cout << "\nPrime Number : \n";

	for (int x = 1; x <= N; x++)
	{
		if (CheckPrimeOrNot(x) == enChecker::Prime)
			cout << x << endl;
	}
}

int main()
{
	PrintOnlyPrime(ReadNumber("Enter A Positive Number : "));
}
