#include <iostream>
using namespace std;


class clsPerson{
private: 
    string _FirstName;
    string _LastName;

public: 

    // Property Set
    void setFirstName(string F_N){
        _FirstName = F_N;
    }

    // Property Set
    void setLastName(string L_N){
        _LastName = L_N;
    }

    // Property Get
    string getFirstName(){
        return _FirstName;
    }

    // Property Get
    string getLastName(){
        return _LastName;
    }

    // Property Get
    string getFullName(){
        return _FirstName + ' ' + _LastName;
    }
};

int main()
{
    clsPerson cPerson_One;

    cPerson_One.setFirstName("Adem");
    cPerson_One.setLastName("Bouaicha");

    cout << "FirstName: " << cPerson_One.getFirstName() << endl;
    cout << "LastName: " << cPerson_One.getLastName() << endl;
    cout << "FullName: " << cPerson_One.getFullName() << endl;

    return 0;
}