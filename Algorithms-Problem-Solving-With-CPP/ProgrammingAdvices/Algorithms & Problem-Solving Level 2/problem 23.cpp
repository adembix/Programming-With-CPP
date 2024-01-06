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
	cout << "Enter The Array Elements Number: ";
	cin >> Length;

	for (int x = 0; x < Length; x++)
	{
		Arr[x] = RandomNum(1, 100);
	}
}

void PrintArray(int Arr[100], short Length)
{
	cout << "Array Elements: ";
	for (int x = 0; x < Length; x++)
	{
		cout << Arr[x] << " ";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr[100];
	short Length;

	ReadArray(Arr, Length);
	PrintArray(Arr, Length);

	return 0;
}