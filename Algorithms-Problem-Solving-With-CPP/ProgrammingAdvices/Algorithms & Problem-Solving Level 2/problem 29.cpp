#include <iostream>
#include <cstdlib>
using namespace std;

enum enIsPrime { Prime = 1, NotPrime = 2 };

int RandomNum(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}

int ReadPositiveNumber(string Text)
{
	int N = 0;

	do
	{
		cout << Text;
		cin >> N;

	} while (N < 1);

	return N;
}

enIsPrime CheckPrimeOrNot(int N)
{

	for (int x = 2; x <= N / 2; x++)
		if (N % x == 0)
			return enIsPrime::NotPrime;

	return enIsPrime::Prime;
}

void Array(int ArrSource[100], short& Length)
{
	cout << "Enter The Array Length: ";
	cin >> Length;

	for (int x = 0; x < Length; x++)
	{
		ArrSource[x] = RandomNum(1, 100);
	}
}

void PrintArray(int ArrSource[100], short Length)
{
	for (int x = 0; x < Length; x++)
		cout << ArrSource[x] << " ";
}

void CopyOnlyPrimeNumbers(int ArrSource[100], int ArrDestintation[100], short Length, short& Length2)
{
	int Counter = 0;

	for (int x = 0; x < Length; x++)
	{
		if (CheckPrimeOrNot(ArrSource[x]) == enIsPrime::Prime)
		{
			ArrDestintation[Counter] = ArrSource[x];
			Counter++;
		}
	}
	Length2 = Counter;
}



int main()
{
	srand((unsigned)time(NULL));

	int ArrSource[100];  short Length; 
	Array(ArrSource, Length);

	int ArrDestination[100]; short Length2;
	CopyOnlyPrimeNumbers(ArrSource, ArrDestination, Length, Length2);



	cout << "\nArray One : ";
	PrintArray(ArrSource, Length);
	cout << "\nOnly Prime Numbers: ";
	PrintArray(ArrDestination, Length2);

}