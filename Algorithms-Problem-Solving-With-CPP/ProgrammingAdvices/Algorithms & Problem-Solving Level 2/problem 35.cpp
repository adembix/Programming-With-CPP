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


void FillArray(int Arr[100], int& Length)
{
	cout << "Enter Length Of Array: ";
	cin >> Length;

	for (int x = 0; x < Length; x++)
		Arr[x] = RandomNum(1, 100);
}


void PrintArray(int Arr[100], int Length)
{
	for (int x = 0; x < Length; x++)
		cout << Arr[x] << " ";
}

short FoundPositionNumber(int ReadFun, int Arr[100], int Length)
{
	for (int x = 0; x < Length; x++)
		if (Arr[x] == ReadFun)
			return x;

	return -1;
}

bool CheckNumberArray(int ReadFun, int Arr[100], int Length)
{
	return FoundPositionNumber(ReadFun, Arr, Length) != -1;
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr[100]; int Length;
	FillArray(Arr, Length);

	cout << "\nArray Elements: ";
	PrintArray(Arr, Length);

	int ReadFun = ReadPositiveNumber("\n\nEnter A Positive Number To Search For: ");

	if (CheckNumberArray(ReadFun, Arr, Length))
	{
		cout << "\nNumber You Are Looking For is: " << ReadFun << endl;
		cout << "The Numbwe is Found :)\n";
	}
	else
	{
		cout << "\nNumber You Are Looking For is: " << ReadFun << endl;
		cout << "The Numbwe Not Found :(\n";
	}

}