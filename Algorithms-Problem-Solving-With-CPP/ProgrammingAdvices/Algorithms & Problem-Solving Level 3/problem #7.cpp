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
	short N = 0;

	for (int x = 0; x < Rows; x++)
	{
		for (int i = 0; i < Cols; i++)
		{
			Arr[x][i] = ++N;
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


void TransPoseMatrix(int Arr[3][3], int ArrTrans[3][3], int Rows, int Cols)
{
	for (int x = 0; x < Rows; x++)
	{
		for (int i = 0; i < Cols; i++)
		{
			ArrTrans[i][x] = Arr[x][i];
		}
	}
}


void PrintTransposed(int Arr[3][3], int ArrTrans[3][3], int Rows, int Cols)
{
	for (int x = 0; x < Rows; x++)
	{
		for (int i = 0; i < Cols; i++)
		{
			cout << setw(3) << ArrTrans[x][i] << "  ";
		}
		cout << endl;
	}
}


int main()
{
	srand(time(NULL));

	int  Arr[3][3];
	int ArrTrans[3][3];

	Fill_Array(Arr,3,3);

	cout << "\nThe following is a 3x3 ordered matrix:\n";
	Print_Array(Arr, 3, 3);


	TransPoseMatrix(Arr, ArrTrans, 3, 3);


	cout << "\n\nThe following is the transposed matrix:\n";
	PrintTransposed(Arr, ArrTrans, 3, 3);

}