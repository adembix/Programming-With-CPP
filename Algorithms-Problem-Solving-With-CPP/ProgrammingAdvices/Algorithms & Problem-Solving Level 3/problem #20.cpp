
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


bool IsPalindrome(short Arr[3][3], short Rows, short Cols)
{
	short Return = 0;

	for (int x = 0; x < Rows; x++)
	{
		for (int j = 0; j < Cols / 2; j++)
		{
			if (Arr[x][j] != Arr[x][Cols - 1 - j])
				return false;
		}
	}
	return true;
}


int main()
{
	srand((unsigned)time(NULL));

	short Matrix_One[3][3] = { {1,5,1},{1,5,1},{7,5,7} };
	short Matrix_Tow[3][3] = { {1,5,1},{1,5,1},{1,5,1} };

	//FillMatrixWithRandomNums(Matrix_One, 3, 3);
	//FillMatrixWithRandomNums(Matrix_Tow, 3, 3);

	cout << "Matrix 1: \n\n";
	PrintMatrix(Matrix_One, 3, 3);

	//cout << "\nMatrix 2: \n\n";
	//PrintMatrix(Matrix_Tow, 3, 3);

	if (IsPalindrome(Matrix_One, 3, 3))
		cout << "\nYes, is Palindrome\n";
	else
		cout << "\nNo, is Not a Palindrome\n";

}