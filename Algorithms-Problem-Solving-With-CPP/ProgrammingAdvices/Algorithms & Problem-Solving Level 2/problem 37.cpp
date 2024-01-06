#include<iostream>
using namespace std;


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


void AddArrayElement(int Number, int Arr[100], int& Length)
{
    Length++;
    Arr[Length - 1] = Number;
}


void CopyArrayUsingAddArrayElement(int Arr[100], int Arr2[100], int Length, int& Length2)
{
    for (int x = 0; x < Length; x++)
        AddArrayElement(Arr[x], Arr2, Length2);
}


int main()
{

    srand((unsigned)time(NULL));

    int Arr[100];  int Length = 0; int Length2 = 0;
    FillArrayWithRandom(Arr, Length);


    int Arr2[100];
    CopyArrayUsingAddArrayElement(Arr,Arr2, Length, Length2);

    
    cout << "\nArray 1 elements:\n";
    PrintArrayElements(Arr, Length);

    cout << "\nArray 2 elements after copy:\n";
    PrintArrayElements(Arr2, Length);


}