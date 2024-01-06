#include <iostream>
using namespace std;

class clsPerson {
private:
    string _FirstName;
    string _LastName;

public:

    clsPerson() : _FirstName("Adem") , _LastName("Bouaicha") {} // Constructor // Initializer list

    string PrintFullName() {
        return _FirstName + ' ' + _LastName;
    }
};

int main()
{
    clsPerson Person;

    cout << "Full Name: " << Person.PrintFullName() << endl;

    return 0;
}