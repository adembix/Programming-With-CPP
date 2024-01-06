#include <iostream>
using namespace std;

class csPerson {
private:
    int _ID = 102030;

public:
    int getID() {
        return _ID;
    }
};

int main()
{
    csPerson Person;

    cout << "\nID: " << Person.getID(); // read only property

    return 0;
}