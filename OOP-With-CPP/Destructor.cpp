#include <iostream>
#include <string>
using namespace std;

class clsClass {
private:
    int _FirstN;

public:

    // called When the object is created for the first time
    clsClass() {
        _FirstN=10;
        cout << "It's Conctructor\n";
    }

    // called when the object's life cycle has ended
    ~clsClass() {
        cout << "It's Destructor\n";
    }
};


int main()
{
    clsClass object;

    return 0;
}