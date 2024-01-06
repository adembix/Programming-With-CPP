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


void FillArrayElements(int Arr1[100], int Length)
{
	for (int x = 0; x < Length; x++)
	{
		Arr1[x] = RandomNum(1, 100);
	}
}


void ArraySum(int Arr1[100], int Arr2[100], int Arr3[100], short Length)
{
	for (int x = 0; x < Length; x++)
		Arr3[x] = Arr1[x] + Arr2[x];
}


void PrintArray(int Arr1[100], short Length)
{
	for (int x = 0; x < Length; x++)
		cout << Arr1[x] << " ";
	cout << endl;
}


int main()
{
	srand((unsigned)time(NULL));

	int Arr1[100]; int Arr2[100]; int SumArray[100];
	int Length = ReadPositiveNumber("Enter a Positive Number Of Array Length: ");


	FillArrayElements(Arr1, Length);
	FillArrayElements(Arr2, Length);

	ArraySum(Arr1, Arr2, SumArray, Length);

	cout << "\nArray One : ";
	PrintArray(Arr1, Length);
	cout << "\nArray Two : ";
	PrintArray(Arr2, Length);

	cout << "\nArray Sum : ";
	PrintArray(SumArray, Length);

}