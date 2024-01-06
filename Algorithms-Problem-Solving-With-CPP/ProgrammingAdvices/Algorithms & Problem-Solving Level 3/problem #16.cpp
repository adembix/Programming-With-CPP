
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
			Arr[x][j] = RandomNums(0, 1);
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


bool IsSparceMatrix(short Arr[3][3], short Rows, short Cols)
{
	short ZeroCount = 0;
	short NumCount = 0;

	for (int x = 0; x < Rows; x++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Arr[x][j] < 1)
				ZeroCount++;
			else
				NumCount++;
		}
	}

	if (ZeroCount > NumCount)
		return true;
	else
		return false;
}

int main()
{
	srand((unsigned)time(NULL));

	short Matrix_One[3][3];

	FillMatrixWithRandomNums(Matrix_One, 3, 3);

	cout << "Matrix 1: \n\n";
	PrintMatrix(Matrix_One, 3, 3);


	if (IsSparceMatrix(Matrix_One, 3, 3))
		cout << "\nIs A Sparce Matrix\n";
	else
		cout << "\nIs Not A Sparce Matrix\n";
}