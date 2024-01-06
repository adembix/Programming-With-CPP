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
        Arr[x] = RandomFunction(1, 100);
}


void PrintArrayElements(int Arr[100], int Length)
{
    for (int x = 0; x < Length; x++)
        cout << Arr[x] << " ";

    cout << endl;
}



short IsEven(int Arr[100], int Length)
{
    short Counter = 0;

    for (int x = 0; x < Length; x++)
        if (Arr[x] % 2 == 0)
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

    cout << "Even Numbers is: ";
    cout << IsEven(Arr, Length) << endl;

}