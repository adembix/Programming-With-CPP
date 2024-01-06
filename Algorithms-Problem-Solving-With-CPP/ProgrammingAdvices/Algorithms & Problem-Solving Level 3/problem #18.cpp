
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



short RandomNums(short x, short y)
{
	return rand() % (y - x + 1) + x;
}


void FillMatrixWithRandomNums(short Arr[3][3], short Rows, short Cols)
{
	for (int x = 0; x < Rows; x++)
		for (int j = 0; j < Cols; j++)
			Arr[x][j] = RandomNums(1, 99);
}


void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (int x = 0; x < Rows; x++)
	{
		for (int j = 0; j < Cols; j++)
			cout << setw(3) << Arr[x][j] << "  ";

		cout << "\n";
	}
}


bool IsRepeatedInMatrix(short Element, short Arr2[3][3], short Rows, short Cols)
{
	for (int x = 0; x < Rows; x++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Element == Arr2[x][j])
				return true;
		}
	}

	return false;
}

void PrintRepeatedInMatrix(short Arr[3][3], short Arr2[3][3], short Rows, short Cols)
{
	cout << "\n";

	for (int x = 0; x < Rows; x++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (IsRepeatedInMatrix(Arr[x][j], Arr2, Rows, Cols))
			{
				cout << Arr[x][j] << "   ";
			}
		}
	}

	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	short Matrix_One[3][3];
	short Matrix_Tow[3][3];

	FillMatrixWithRandomNums(Matrix_One, 3, 3);
	FillMatrixWithRandomNums(Matrix_Tow, 3, 3);

	cout << "Matrix 1: \n\n";
	PrintMatrix(Matrix_One, 3, 3);

	cout << "\nMatrix 2: \n\n";
	PrintMatrix(Matrix_Tow, 3, 3);


	PrintRepeatedInMatrix(Matrix_One, Matrix_Tow, 3, 3);
}