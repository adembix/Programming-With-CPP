#include<iostream>
using namespace std;

enum enIsOdd { isOdd = 1, notOdd = 2 };

int RandomNumber(int From, int To)
{
    int Num = rand() % (To - From + 1) + From;
    return Num;
}


void FillArrayWithRandom(int Arr[100], int& Length)
{
    cout << "Enter The Length Of Array: ";
    cin >> Length;

    for (int x = 0; x < Length; x++)
        Arr[x] = RandomNumber(1, 100);
}


void PrintArrayElements(int Arr[100], int Length)
{
    for (int x = 0; x < Length; x++)
        cout << Arr[x] << " ";

    cout << endl;
}


enIsOdd NumberIsOdd(int Number)
{
    if (Number % 2 == 0)
        return enIsOdd::notOdd;
    else
        return enIsOdd::isOdd;
}


void FillArrayWithElement(int Number, int Arr[100], int& Length)
{
    Arr[Length] = Number;
    Length++;
}


void CopyOnlyOddUsingAddArrayElement(int Arr[100], int Arr2[100], int Length, int& Length2)
{
    for (int x = 0; x < Length; x++)
        if (NumberIsOdd(Arr[x]) == enIsOdd::isOdd)
            FillArrayWithElement(Arr[x], Arr2, Length2);
}


int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];  int Length = 0; int Length2 = 0;
    FillArrayWithRandom(Arr, Length);

    int Arr2[100];
    CopyOnlyOddUsingAddArrayElement(Arr,Arr2, Length, Length2);

    
    cout << "\nArray 1 elements:\n";
    PrintArrayElements(Arr, Length);

    cout << "\nOnly Odd elements after copy:\n";
    PrintArrayElements(Arr2, Length2);

}

________________________________________________________________________________________________


#include<iostream>
using namespace std;

enum enIsOdd { isOdd = 1, notOdd = 2 };

int RandomNumber(int From, int To)
{
    int Num = rand() % (To - From + 1) + From;
    return Num;
}


void FillArrayWithRandom(int Arr[100], int& Length)
{
    cout << "Enter The Length Of Array: ";
    cin >> Length;

    for (int x = 0; x < Length; x++)
        Arr[x] = RandomNumber(1, 100);
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


void CopyOnlyOddUsingAddArrayElement(int Arr[100], int Arr2[100], int Length, int& Length2)
{
    for (int x = 0; x < Length; x++)
        if (Arr[x] % 2 != 0)
        {
            FillArrayWithElement(Arr[x], Arr2, Length2);
        }
}


int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];  int Length = 0; int Length2 = 0;
    FillArrayWithRandom(Arr, Length);

    int Arr2[100];
    CopyOnlyOddUsingAddArrayElement(Arr,Arr2, Length, Length2);

    
    cout << "\nArray 1 elements:\n";
    PrintArrayElements(Arr, Length);

    cout << "\nOnly Odd elements after copy:\n";
    PrintArrayElements(Arr2, Length2);

}