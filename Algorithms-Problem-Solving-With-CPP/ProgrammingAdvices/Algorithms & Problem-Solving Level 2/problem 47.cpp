#include<iostream>
#include<string>
using namespace std;

float GetFractionPart(float Number)
{
    return Number - int(Number);
}


int MyRound(float Number)
{
    int IntPart = int(Number);
    float FractionsPart = GetFractionPart(Number);

    if (abs(FractionsPart) >= .5)
    {
        if (Number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else
    {
        return IntPart;
    }

}


float ReadNumber()
{
    float N = 0;

    cout << "enter the number: ";
    cin >> N;

    return N;
}




int main()
{
    float Number = ReadNumber();
    cout << "Using MyRound: " << MyRound(Number);
}