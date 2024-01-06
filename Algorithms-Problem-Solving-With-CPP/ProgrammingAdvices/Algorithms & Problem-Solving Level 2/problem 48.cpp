#include<iostream>
#include<string>
using namespace std;


float ReadNumber()
{
    float N = 0;

    cout << "enter the number: ";
    cin >> N;

    return N;
}


float MyFloor(float Number)
{

    if (Number > 0)
        return int(Number);

    else
        return int(Number) - 1;

}


int main()
{
    cout << MyFloor(ReadNumber());
}
}