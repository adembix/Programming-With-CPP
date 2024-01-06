#include <iostream>
#include <cstdlib>
using namespace std;


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

void FillArray(int Arr[100], int Length)
{
	for (int x = 0; x < Length; x++)
		Arr[x] = RandomNum(1,100);
}

void CopyArrayReversed(int Arr[100], int Arr2[100], int Length)
{
	int Counter = 0;

	for (int x = Length - 1; x >= 0; x--)
	{
		Arr2[Counter] = Arr[x];
		Counter++;
	}
}

void PrintArray(int Arr[100], int Length)
{
	for (int x = 0; x < Length; x++)
		cout << Arr[x] << " ";
}


int main()
{
	int Arr[100]; int Arr2[100];
	int ReadFun = ReadPositiveNumber("Enter A Positive Number: ");

	FillArray(Arr, ReadFun);

	cout << "\nArray One: ";
	PrintArray(Arr, ReadFun);

	CopyArrayReversed(Arr, Arr2, ReadFun);

	cout << "\nArray Two: ";
	PrintArray(Arr2, ReadFun);
}