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
	cout << "Array Elements: ";

	for (int x = 0; x < Length; x++)
	{
		cout << Arr[x] << " ";
	}
}

short MinArrayNumber(int Arr[100], short Length)
{
	short Max = Arr[0];

	for (int x = 0; x < Length; x++)
	{
		if (Arr[x] < Max)
		{
			Max = Arr[x];
		}
	}
	return Max;
}


int main()
{
	srand((unsigned)time(NULL));

	int Arr[100];
	short Length;

	ReadArray(Arr, Length);
	PrintArrayElements(Arr, Length);

	cout << "\nMin Number is: " << MinArrayNumber(Arr, Length);

	return 0;
}