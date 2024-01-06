#include<iostream>
using namespace std;


float ReadNumber()
{
    float N = 0;
    cout << "enter the number: ";
    cin >> N;
    return N;
}


float MySqrt(float Number)
{
    return pow(Number, 0.5);
}


int main()
{
    float Num = ReadNumber();

    cout << "MySqrt: " << MySqrt(Num) << endl;
    cout << "Sqrt: " << sqrt(Num) << endl;
}