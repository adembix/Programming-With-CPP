#include <iostream>
using namespace std;

class clsPerson {
private:
    int var1 = 10;
public:
    int var2 = 20;

    friend class clsEmployee;
};

class clsEmployee : public clsPerson {
public:
    void varPrint(){
        cout << var1 << endl; //  accessible private member for the base class
    }
};


int main() {

    clsEmployee obj;

    obj.varPrint();

    return 0;
}
