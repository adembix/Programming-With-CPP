#include <iostream>
using namespace std;

class csPerson {
private:
    string _FirstName;

public:
    void setFirstName(string T) {
        _FirstName = T;
    }

    string getFirstName() {
        return _FirstName;
    }

    __declspec(property(get = getFirstName, put = setFirstName)) string T;
};

int main()
{
    csPerson Person;

    Person.T = "Adem";
    cout << "First Name: " << Person.T << endl;

    return 0;
}

