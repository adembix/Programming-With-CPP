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

char SpecialCharacterGen()
{
	return (char)RandomNum(65, 90);
}


string WordGen()
{
	string Word = "";

	for (int x = 0; x < 4; x++)
		Word += SpecialCharacterGen();

	return Word;
}


string KeyGen()
{
	string Key = "";

	Key = WordGen() + '-';
	Key += WordGen() + '-';
	Key += WordGen() + '-';
	Key += WordGen();

	return Key;
}


void FillArray(string Arr[100], int Length)
{
	for (int x = 0; x < Length; x++)
		Arr[x] = KeyGen();
}


void PrintArray(string Arr[100], int Length)
{
	for (int x = 0; x < Length; x++)
		cout << "Array [" << x << "]: " << Arr[x] << "\n";
}


int main()
{
	srand((unsigned)time(NULL));

	string Arr[100];
	int ReadFun = ReadPositiveNumber("Enter A Positive Number: ");

	FillArray(Arr, ReadFun);

	cout << "\nArray Elements: \n";
	PrintArray(Arr, ReadFun);

}