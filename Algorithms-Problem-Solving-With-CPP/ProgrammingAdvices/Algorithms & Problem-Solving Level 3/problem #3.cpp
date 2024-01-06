
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


short MinNumber(short Arr[3][3], short Rows, short Cols)
{
	short MinNum = Arr[0][0];

	for (int x = 0; x < Rows; x++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (MinNum > Arr[x][j])
				MinNum = Arr[x][j];
		}
	}

	return MinNum;
}

short MaxNumber(short Arr[3][3], short Rows, short Cols)
{
	short MaxNum = Arr[0][0];

	for (int x = 0; x < Rows; x++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (MaxNum < Arr[x][j])
				MaxNum = Arr[x][j];
		}
	}

	return MaxNum;
}

int main()
{
	srand((unsigned)time(NULL));

	short Matrix_One[3][3];
	short Matrix_Tow[3][3];

	FillMatrixWithRandomNums(Matrix_One, 3, 3);
	//FillMatrixWithRandomNums(Matrix_Tow, 3, 3);

	cout << "Matrix 1: \n\n";
	PrintMatrix(Matrix_One, 3, 3);

	//cout << "\nMatrix 2: \n\n";
	//PrintMatrix(Matrix_Tow, 3, 3);


	cout << "\nMin Number is: " << MinNumber(Matrix_One, 3, 3);
	cout << "\nMax Number is: " << MaxNumber(Matrix_One, 3, 3);
}