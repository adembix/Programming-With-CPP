#include <iostream>  
using namespace std;

class clsEmployee {
public:
    float Salary = 50;

    void Print() {
        cout << "Salary: " << Salary << "\n";
    }
};

void Func1(clsEmployee obj) {
    obj.Salary = 100;
}

void Func2(clsEmployee& obj) {
    obj.Salary = 5000;
}

int main(void) {

    clsEmployee obj;

    cout << "\nA.x before calling functions: \n";
    obj.Print();

    Func1(obj);
    cout << "\nA.x after calling function1 by val: \n";
    obj.Print();

    Func2(obj);
    cout << "\nA.x after calling function2 by ref: \n";
    obj.Print();

    return 0;
}
