#include <iostream>
using namespace std;

class clsPerson {
private:
    int var1 = 10;

protected:
    int var2 = 20;

public:
    int var3 = 30;

    friend int PrintResult(clsPerson o1);
};


int PrintResult(clsPerson o1){
    return o1.var1 + o1.var2 + o1.var3;  //  accessible private and protected and public member for base class
}


int main() {
    clsPerson o1;
    cout << PrintResult(o1) << endl;

    return 0;
}
