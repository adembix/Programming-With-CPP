#include <iostream>
#include <string>
using namespace std;

class clsClass {
private:
    int _FirstN;
    int _LastN;

public:
    clsClass(int F, int L) : _FirstN(F), _LastN(L) {}

    void PrintValues() {
        cout << "First N: " << _FirstN << "\t Last N: " << _LastN << "\n";
    }
};

int main()
{
    clsClass object1(10,20);
    object1.PrintValues();

    clsClass object2 = object1;
    object2.PrintValues();

    return 0;
}