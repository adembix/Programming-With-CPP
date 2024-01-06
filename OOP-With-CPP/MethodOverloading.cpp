#include <iostream>
using namespace std;

class clsPerson {
private:
    string _FirstName;
    string _LastName;

public:

    clsPerson(string F, string L) : _FirstName(F), _LastName(L) {} // Constructor // Initializer list

    string PrintFullName() {
        return _FirstName + ' ' + _LastName;
    }

    //--------------------------------------
    // -------- Method Overloading --------
    //--------------------------------------

    short Add(short one, short two) {
        return one + two;
    }

    short Add(short one, short two, short three) {
        return one + two + three;
    }

};

int main()
{
    clsPerson Person("Adem", "Bouaicha");
    cout << "Full Name: " << Person.PrintFullName() << endl;

    // -------- Method Overloading --------
    cout << Person.Add(10, 20) << "\n"; //
    cout << Person.Add(10, 20,30) << "\n"; //

    return 0;
}