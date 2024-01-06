#include<iostream>
using namespace std;


void FillArray(int Arr[100], int& Length)
{
    Arr[0] = 10;
    Arr[1] = 10;
    Arr[2] = 10;
    Arr[3] = 70;
    Arr[4] = 70;
    Arr[5] = 70;
    Arr[6] = 70;
    Arr[7] = 20;
    Arr[8] = 30;
    Arr[9] = 30;

    Length = 10;
}


void PrintArrayElements(int Arr[100], int Length)
{
    for (int x = 0; x < Length; x++)
        cout << Arr[x] << " ";

    cout << endl;
}


void FillArrayWithElement(int Number, int Arr[100], int& Length)
{
    Arr[Length] = Number;
    Length++;
}


bool CheckRepeatedNumbers(int Number, int Arr2[100], int Length)
{
    for (int x = 0; x < Length; x++)
        if (Number == Arr2[x])
            return false;

    return true;
}

void CopyOnlydistanicUsingAddArrayElement(int Arr[100], int Arr2[100], int Length, int& Length2)
{
    for (int x = 0; x < Length; x++)
        if (CheckRepeatedNumbers(Arr[x] ,Arr2,Length))
            FillArrayWithElement(Arr[x], Arr2, Length2);
}


int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];  int Length = 0; int Length2 = 0;
    FillArray(Arr, Length);

    int Arr2[100];
    CopyOnlydistanicUsingAddArrayElement(Arr, Arr2, Length, Length2);

    cout << "\nArray 1 elements:\n";
    PrintArrayElements(Arr, Length);

    cout << "\nArray 2 distanic elements:\n";
    PrintArrayElements(Arr2, Length2);

}

________________________________________________________________________________________________


#include<iostream>
using namespace std;


void FillArray(int Arr[100], int& Length)
{
    Arr[0] = 10;
    Arr[1] = 10;
    Arr[2] = 10;
    Arr[3] = 70;
    Arr[4] = 70;
    Arr[5] = 70;
    Arr[6] = 70;
    Arr[7] = 20;
    Arr[8] = 30;
    Arr[9] = 30;

    Length = 10;
}


void PrintArrayElements(int Arr[100], int Length)
{
    for (int x = 0; x < Length; x++)
        cout << Arr[x] << " ";

    cout << endl;
}

short FindNumberPositionInArray(int Number, int Arr[100], int Length)
{
    for (int x = 0; x < Length; x++)
    {
        if (Number == Arr[x])
            return x;
    }

    return -1;
}

bool CheckRepeatedNumbers(int Number, int Arr[100], int Length)
{
    return FindNumberPositionInArray(Number, Arr, Length) != -1;
}

void FillArrayWithElement(int Number, int Arr[100], int& Length)
{
    Arr[Length] = Number;
    Length++;
}



void CopyOnlydistanicUsingAddArrayElement(int Arr[100], int Arr2[100], int Length, int& Length2)
{
    for (int x = 0; x < Length; x++)
        if (!CheckRepeatedNumbers(Arr[x] ,Arr2,Length))
            FillArrayWithElement(Arr[x], Arr2, Length2);
}


int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];  int Length = 0; int Length2 = 0;
    FillArray(Arr, Length);

    int Arr2[100];
    CopyOnlydistanicUsingAddArrayElement(Arr, Arr2, Length, Length2);

    cout << "\nArray 1 elements:\n";
    PrintArrayElements(Arr, Length);

    cout << "\nArray 2 distanic elements:\n";
    PrintArrayElements(Arr2, Length2);

}