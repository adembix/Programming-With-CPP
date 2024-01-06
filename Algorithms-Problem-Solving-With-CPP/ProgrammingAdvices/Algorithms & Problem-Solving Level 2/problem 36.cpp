#include<iostream>
using namespace std;


int ReadNumber()
{
    int Number;

    cout << "\nPlease enter a number? ";
    cin >> Number;

    return Number;
}

void AddArrayElement(int Number, int Arr[100], int& Length)
{
    Arr[Length] = Number;
    Length++;
}

void InputMoreNumberOrNot(int Arr[100], int& Length)
{
    bool AddMore = 1;

    do
    {
        AddArrayElement(ReadNumber(), Arr, Length);

        cout << "Do You Want Add More Numbers? (Y=1 / N=0): ";
        cin >> AddMore;

    } while (AddMore);
}

void PrintArrayElements(int Arr[100], int Length)
{
    for (int x = 0; x < Length; x++)
        cout << Arr[x] << " ";
}


int main()
{
    int Arr[100]; int Length = 0;
    InputMoreNumberOrNot(Arr, Length);

    cout << "\nArray Elements Number: " << Length << endl;
    cout << "Array Elements : ";
    PrintArrayElements(Arr, Length);
    
}