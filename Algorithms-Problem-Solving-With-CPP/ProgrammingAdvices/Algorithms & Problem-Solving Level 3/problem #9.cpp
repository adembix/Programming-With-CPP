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

void Nothing()
{
    /*

void MultiMatrix(int Arr[3][3], int Arr2[3][3], int Arr3[3][3], short Rows, short Cols)
{
    for (int x = 0; x < Rows; x++)
    {
        for (int i = 0; i < Cols; i++)
        {
            Arr3[x][i] = Arr[x][i] * Arr2[x][i];
        }
    }
}

void PrintMultiMatrix(int Arr3[3][3], short Rows, short Cols)
{
    for (int x = 0; x < Rows; x++)
    {
        for (int i = 0; i < Cols; i++)
        {
            printf("%0*d   ",2, Arr3[x][i]);
            //printf("%0*d   ",2, Arr3[x][i]);
        }
        cout << "\n";
    }
}

*/
}

int RandomNumbers(int From, int To)
{
	int N = rand() % (To - From + 1) + From;
	return N;
}

void FillMatrixWithRandomNumbers(int Arr[3][3], short Rows, short Cols)
{
    for (int x = 0; x < Rows; x++)
    {
        for (int i = 0; i < Cols; i++)
        {
            Arr[x][i] = RandomNumbers(1,10);
        }
    }
}

void PrintMatrix(int Arr[3][3], short Rows, short Cols)
{
    for (int x = 0; x < Rows; x++)
    {
        for (int i = 0; i < Cols; i++)
        {
            printf("%0*d   ",2,Arr[x][i]);
        }
        cout << "\n";
    }
}


void PrintRows(int Arr[3][3], short Rows, short Cols)
{
    for (int x = 0; x < Rows; x++)
    {
        printf("%0*d   ",2,Arr[1][x]);
    }
}

void PrintCols(int Arr[3][3], short Rows, short Cols)
{
    for (int x = 0; x < Rows; x++)
    {
        printf("%0*d   ",2,Arr[x][1]);
    }
    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];

    FillMatrixWithRandomNumbers(Matrix,3,3);

    cout << "Matrix: \n";
    PrintMatrix(Matrix,3,3);

    cout << "\n\nPrinted Rows: \n";
    PrintRows(Matrix,3,3);

    cout << "\n\nPrinted Cols: \n";
    PrintCols(Matrix,3,3);
}
