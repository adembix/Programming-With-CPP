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

short SumArrayNumbers(int Arr[100], short Length)
{
	short Sum = 0;

	for (int x = 0; x < Length; x++)
	{
		Sum += Arr[x];
	}
	return Sum;
}

float ArrayAvrrage(int Arr[100], short Length)
{
	return (float)SumArrayNumbers(Arr, Length) / Length;
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr[100];
	short Length;

	ReadArray(Arr, Length);
	PrintArrayElements(Arr, Length);

	cout << "\n\nSum Numbers is: " << SumArrayNumbers(Arr, Length) << endl;
	cout << "\nArray Avrrage is: " << ArrayAvrrage(Arr, Length) << endl;

	return 0;
}