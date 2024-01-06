#include <iostream>
#include <cstdlib>
using namespace std;


int RandomNum(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}

void ReadArray(int Arr[100], short& Length)
{
	cout << "Enter Array Element Numbers: ";
	cin >> Length;

	for (int x = 0; x < Length; x++)
	{
		Arr[x] = RandomNum(1, 100);
	}
}

void PrintArrayElements(int Arr[100], short Length)
{
	for (int x = 0; x < Length; x++)
	{
		cout << Arr[x] << " ";
	}
}

void CopyArray(int Arr[100],int Arr2[100], short Length)
{
	for (int x = 0; x < Length; x++)
		Arr2[x] = Arr[x];
}


int main()
{
	srand((unsigned)time(NULL));

	int Arr[100];
	short Length;
	int Arr2[100];

	ReadArray(Arr, Length);
	CopyArray(Arr, Arr2, Length);
	
	cout << "\nArray 1 : ";
	PrintArrayElements(Arr, Length);
	cout << "\nArray 2 : ";
	PrintArrayElements(Arr2, Length);

	return 0;
}