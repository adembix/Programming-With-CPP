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

void FillMatrixWithRandomNumbers(int Arr[3][3], int Rows, int Cols)
{
	//short N = 0;

	for (int x = 0; x < Rows; x++)
	{
		for (int i = 0; i < Cols; i++)
		{
			Arr[x][i] = RandomNumbers(1,10);
		}
	}
}


void PrintMatrix(int Arr[3][3], int Rows, int Cols)
{
	for (int x = 0; x < Rows; x++)
	{
		for (int i = 0; i < Cols; i++)
		{
			printf(" %0*d   ", 2, Arr[x][i]);
			//cout << setw(3) << arr[i][j] << "     ";
		}
		cout << endl;
	}
}


void MultiplyMatrix(int Arr[3][3], int Arr2[3][3], int Arr3[3][3], int Rows, int Cols)
{
	for (int x = 0; x < Rows; x++)
	{
		for (int i = 0; i < Cols; i++)
		{
			Arr3[x][i] = Arr[x][i] * Arr2[x][i];
		}
	}
}


int main()
{
	srand(time(NULL));

	int ArrMatrix[3][3];
	int ArrMatrix2[3][3];
	int ArrMarix3[3][3];

	FillMatrixWithRandomNumbers(ArrMatrix, 3, 3);

	cout << "\nMatrix1:\n";
	PrintMatrix(ArrMatrix, 3, 3);

	FillMatrixWithRandomNumbers(ArrMatrix2, 3, 3);

	cout << "\nMatrix2:\n";
	PrintMatrix(ArrMatrix2, 3, 3);
	
	MultiplyMatrix(ArrMatrix, ArrMatrix2, ArrMarix3, 3, 3);

	cout << "\nResults:\n";
	PrintMatrix(ArrMarix3, 3, 3);

}