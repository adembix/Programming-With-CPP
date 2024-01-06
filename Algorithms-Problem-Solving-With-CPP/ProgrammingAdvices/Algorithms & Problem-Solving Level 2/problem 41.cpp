#include<iostream>
#include<string>
using namespace std;


void FillArray(int Arr[100], int& Length)
{
    Arr[0] = 10;
    Arr[1] = 20;
    Arr[2] = 30;
    Arr[3] = 30;
    Arr[4] = 20;
    Arr[5] = 10;


    Length = 6;
}


void PrintArrayElements(int Arr[100], int Length)
{
    for (int x = 0; x < Length; x++)
        cout << Arr[x] << " ";

    cout << endl;
}

string ArrayToString(int Arr[100], int Length)
{
    string Array = "";

    for (int x = 0; x < Length; x++)
    {
        Array += to_string(Arr[x]);
    }

    return Array;
}

string ArrayToStringReversed(int Arr[100], int Length)
{
    string Array2 = "";

    for (int x = Length - 1; x >= 0; x--)
    {
        Array2 += to_string(Arr[x]);
    }

    return Array2;
}


bool IsPalindrome(int Arr[100], int Length)
{
    return ArrayToString(Arr, Length) == ArrayToStringReversed(Arr, Length);
}


int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];  int Length = 0; int Length2 = 0;
    FillArray(Arr, Length);

    if (IsPalindrome(Arr, Length))
    {
        cout << "Array Elements: ";
        PrintArrayElements(Arr, Length);

        cout << "\nYes, Array is Palindrome.\n";
    }
    else
    {
        cout << "Array Elements: ";
        PrintArrayElements(Arr, Length);

        cout << "\nNo, Array is Not Palindrome.\n";
    }

}


___________________________________________________________________________________________________


#include<iostream>
#include<string>
using namespace std;


void FillArray(int Arr[100], int& Length)
{
    Arr[0] = 10;
    Arr[1] = 20;
    Arr[2] = 30;
    Arr[3] = 30;
    Arr[4] = 20;
    Arr[5] = 10;


    Length = 6;
}


void PrintArrayElements(int Arr[100], int Length)
{
    for (int x = 0; x < Length; x++)
        cout << Arr[x] << " ";

    cout << endl;
}



bool IsPalindrome(int Arr[100], int Length)
{
    for (int x = 0; x < Length; x++)
        if (Arr[x] != Arr[Length - x - 1])
            return false;


    return true;
}


int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];  int Length = 0; int Length2 = 0;
    FillArray(Arr, Length);

    if (IsPalindrome(Arr, Length))
    {
        cout << "Array Elements: ";
        PrintArrayElements(Arr, Length);

        cout << "\nYes, Array is Palindrome.\n";
    }
    else
    {
        cout << "Array Elements: ";
        PrintArrayElements(Arr, Length);

        cout << "\nNo, Array is Not Palindrome.\n";
    }
