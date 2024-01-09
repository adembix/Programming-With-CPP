#include <iostream>
using namespace std;

class clsPerson {
    class clsSubPerson {
    public:
        string FirstName;
        string Lastname;

        void PrintData() {
            cout << "FirstName : " << FirstName << endl;
            cout << "LastName  : " << Lastname << endl;
        }
    };

public:
    clsSubPerson o1;
    clsPerson() {
        o1.FirstName = "Adem";
        o1.Lastname = "Bouaicha";
    }
};


int main() {
    clsPerson o1;

    o1.o1.PrintData();

    return 0;
}
