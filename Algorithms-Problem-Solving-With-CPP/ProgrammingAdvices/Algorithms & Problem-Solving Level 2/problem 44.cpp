#include<iostream>
#include<string>
using namespace std;


int RandomFunction(int From, int To)
{
    int Num = rand() % (To - From + 1) + From;
    return Num;
}


void FillArray(int Arr[100], int& Length)
{
    cout << "Enter The Array Length: ";
    cin >> Length;

    for (int x = 0; x < Length; x++)
        Arr[x] = RandomFunction(-100, 100);
}


void PrintArrayElements(int Arr[100], int Length)
{
    for (int x = 0; x < Length; x++)
        cout << Arr[x] << " ";

    cout << endl;
}


short PositiveCounter(int Arr[100], int Length)
{
    short Counter = 0;

    for (int x = 0; x < Length; x++)
        if (Arr[x] >= 0)
            Counter++;

    return Counter;
}


int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];  int Length = 0; int Length2 = 0;
    FillArray(Arr, Length);

    cout << "Array Elements: ";
    PrintArrayElements(Arr, Length);

    cout << "Positive Numbers is: ";
    cout << PositiveCounter(Arr, Length) << endl;

}