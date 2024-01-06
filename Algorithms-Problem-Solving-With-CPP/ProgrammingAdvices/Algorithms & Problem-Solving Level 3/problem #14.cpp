
#include <iostream>
#include <string>
using namespace std;


short RandomNums(short x, short y)
{
	return rand() % (y - x + 1) + x;
}


void FillMatrixWithRandomNums(short Arr[3][3], short Rows, short Cols)
{
	for (int x = 0; x < Rows; x++)
		for (int j = 0; j < Cols; j++)
			Arr[x][j] = RandomNums(1, 10);
}


void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (int x = 0; x < Rows; x++)
	{
		for (int j = 0; j < Cols; j++)
			printf("%0*d   ", 2, Arr[x][j]);

		cout << "\n";
	}
}


bool IsScalarMatrix(short Arr[3][3], short Rows, short Cols)
{
	int Check = Arr[0][0];

	for (int x = 0; x < Rows; x++)
	{
		for (int j = 0; j < Cols; j++)
		{

			if (x != j && Arr[x][j] != 0)
				return false;

			if (x == j && Arr[x][j] != Check)
				return false;

		}
	}

	return true;
}

int main()
{
	srand((unsigned)time(NULL));

	short Matrix_One[3][3] = { {1,0,0},{0,1,0},{0,0,1} };

	//FillMatrixWithRandomNums(Matrix_One, 3, 3);

	cout << "Matrix 1: \n\n";
	PrintMatrix(Matrix_One, 3, 3);


	if (IsScalarMatrix(Matrix_One, 3, 3))
		cout << "\nIs A Scalar Matrix\n";
	else
		cout << "\nIs Not A Scalar Matrix\n";
}