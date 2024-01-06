#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>

using namespace std;

int RandomNumber(int From , int To)
{
    int N = rand() % (To-From+1)+From;
    return N;
}

int ReadNumber(string Text)
{
    int N = 0;
    cout << Text ;
    cin >> N;

    return N;
}

void ReplaceValue(int& A, int& B)
{
    int Temp = B;
    B = A;
    A = B;
}


void FillArray(int Arr[100],int Length)
{
    for (int x = 0; x < Length; x++)
        Arr[x] = x+1;
}

void ReverseNumbers(int Arr[100],short Length)
{
    for (int x = 0; x < Length; x++)
    {
        ReplaceValue(Arr[RandomNumber(1,Length) - 1],Arr[RandomNumber(1,Length) - 1]);
    }
}

void PrintArray(int Arr[100],short Length)
{
    for (int x = 0; x < Length; x++)
        cout << Arr[x] << " ";
}


int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];
    int Length = ReadNumber("\nEnter number of elements : \n");

    FillArray(Arr,Length);

    cout << "\nArray Elements: ";
    PrintArray(Arr,Length);

    ReverseNumbers(Arr,Length);

    cout << "\nArray Elements Reversed: ";
    PrintArray(Arr,Length);
    //int ReadN = ReadNumber("\nNumber To Search For: ");



    return 0;
}
