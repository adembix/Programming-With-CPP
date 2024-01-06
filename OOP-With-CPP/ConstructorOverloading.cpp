#include <iostream>
#include <string>
using namespace std;

class clsPerson {
private:
    string _FirstName;
    string _LastName;
    short _Age = 0;

public:

    clsPerson() : _FirstName("Adem"), _LastName("Bouaicha") {} // Default Constructor By Me

    // Constructor Overloading
    clsPerson(string F, string L) : _FirstName(F), _LastName(L) {} 
    clsPerson(string F, string L, short A) : _FirstName(F), _LastName(L), _Age(A) {}

    string PrintFullName() {
        return _FirstName + ' ' + _LastName;
    }

    string PrintFullName_() {
        return _FirstName + ' ' + _LastName + " Age : " + to_string(_Age);
    }

};

int main()
{
    clsPerson Person; // Default Constructor 
    cout << "Full Name: " << Person.PrintFullName() << endl;


    // Constructor Overloading

    clsPerson Person2("Mike", "Jacksin");
    cout << "Full Name: " << Person2.PrintFullName() << endl;

    clsPerson Person3("Emma", "Emma", 20);
    cout << "Full Name: " << Person3.PrintFullName_() << endl;

    return 0;
}