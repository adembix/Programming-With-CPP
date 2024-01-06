#include <iostream>
using namespace std;


class clsPerson{
private: // only accessable inside this class
    short variable_1 = 5;

    short Private_Func()
    {
        return variable_1 + 5;
    }

protected: // only accessable inside and all classes inhirets this class
    short variable_2 = 5;

    short Protected_Func()
    {
        return variable_2 + 5;
    }

public: // accessable for everyone outside/inside/and classes inherits this class
    short variable_3 = 5;

    short Public_Func()
    {
        return Private_Func() + Protected_Func() + (variable_3 + 5);
    }
};


int main()
{
    clsPerson cPerson_One;

    cout << cPerson_One.Public_Func() << endl; // 30 output 
}