#include<iostream>
#include<string>
using namespace std;


int ReadNumber()
{
    int N = 0;

    cout << "enter the number: ";
    cin >> N;

    return N;
}


int MyABS(int Num)
{
    if (Num > 0)
        return Num;
    else
        return Num * -1;
}


int main()
{
    srand((unsigned)time(NULL));

    int Num = ReadNumber();

    cout << "\nUsing MyABS: " << MyABS(Num) << endl;
    cout << "\nUsing C++ ABS: " << abs(Num) << endl;

}