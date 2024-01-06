//#pragma warning (disable: 4996)

#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <cctype>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int RandomNumbers(int From, int To)
{
	int N = rand() % (To - From + 1) + From;
	return N;
}

void Fill_Array(int Arr[3][3], int Rows, int Cols)
{
	for (int x = 0; x < Rows; x++)
	{
		for (int i = 0; i < Cols; i++)
		{
			Arr[x][i] = RandomNumbers(1, 10);
		}
	}
}


void Print_Array(int Arr[3][3], int Rows, int Cols)
{
	for (int x = 0; x < Rows; x++)
	{
		for (int i = 0; i < Cols; i++)
		{
			cout << setw(3) << Arr[x][i] << "  ";
		}
		cout << endl;
	}
}


int SumArray(int Arr[3][3], int RowNum, int Cols)
{
	int Sum = 0;

	for (int x = 0; x < Cols; x++)
	{
		Sum += Arr[x][RowNum];
	}

	return Sum;
}


void ConvertResultToNormalArray(int Arr[3][3], int Arr2[3], int Rows, int Cols)
{
	for (int x = 0; x < Cols; x++)
	{
		Arr2[x] = SumArray(Arr, x, 3);
	}
}

void PrintResults(int Arr2[3], int Cols)
{
	for (int x = 0; x < Cols; x++)
	{
		cout << "Cols " << x + 1 << " Sum = " << Arr2[x] << endl;
	}
}


int main()
{
	srand(time(NULL));

	int  Arr[3][3];
	int Arr2[3];

	Fill_Array(Arr,3,3);
	Print_Array(Arr, 3, 3);

	ConvertResultToNormalArray(Arr, Arr2, 3, 3);

	cout << "\nThe the following are the sum of each row in the matrix:\n";
	PrintResults(Arr2, 3);
}