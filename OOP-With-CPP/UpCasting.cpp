#include <iostream>
using namespace std;

class cPerson {
public:
    string FullName = "Adem Bouaicha";
};

class cEmploee : public cPerson {
public:
    string Title = "CEO";
};

int main(){
    cEmploee emp1;
    cout << emp1.FullName << endl;

      // UpCasting
    cPerson *personPtr = &emp1;
    cout << personPtr->FullName << endl;

    return 0;
}