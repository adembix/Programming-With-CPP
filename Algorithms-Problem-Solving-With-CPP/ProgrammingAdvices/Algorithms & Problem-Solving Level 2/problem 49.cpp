#include<iostream>
using namespace std;


float ReadNumber()
{
    float N = 0;
    cout << "enter the number: ";
    cin >> N;
    return N;
}


float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyCeil(float Number)
{



    if (abs(GetFractionPart(Number)) > 0)
    {
        if (Number > 0)
            return int(Number) + 1;

        else
            return int(Number);
    }

    else
    {
        return int(Number);
    }

}


int main()
{
    float Num = ReadNumber();

    cout << "MyCeil: " << MyCeil(Num) << endl;
    cout << "Ceil: " << ceil(Num) << endl;
}