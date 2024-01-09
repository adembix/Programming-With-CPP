#include <iostream>
using namespace std;

class clsPerson {
private:
    struct stData{
        string FirstName;
        string LastName;
    };

public:
    stData Data;
    clsPerson() {
        Data.FirstName = "Adem";
        Data.LastName = "Bouaicha";
    }

};


int main() {
    clsPerson o1;

    cout << "FirstName : " <<o1.Data.FirstName << endl;
    cout << "LastName  : " << o1.Data.LastName << endl;

    return 0;
}
