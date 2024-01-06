#include <iostream>
using namespace std;

class csCalculator {
private:
    float _LastNumber = 0;
    float _Result = 0;
    string _LastOperation = "Clear";
    float _PreviousResult = 0;

    // like abstraction (maybe :| )
    bool IsEqual(float N) {
        return (N == 0);
    }

public:

    void Clear() {
        _LastNumber = 0;
        _PreviousResult = 0;
        _LastOperation = "Clear";
        _Result = 0;
    }

    void Add(float N) {
        _LastNumber = N;
        _PreviousResult = _Result;
        _LastOperation = "Adding";
        _Result += N;
    }

    void Subtract(float N) {
        _LastNumber = N;
        _PreviousResult = _Result;
        _LastOperation = "Substacting";
        _Result -= N;
    }

    void Divide(float N) {
        _LastNumber = N;
        _PreviousResult = _Result;

        (IsEqual(N)) ? N = 1 : N = N;

        _LastOperation = "Dividing";
        _Result /= N;
    }

    void Multiply(float N) {
        _LastNumber = N;
        _PreviousResult = _Result;
        _LastOperation = "Multiplying";
        _Result *= N;
    }

    void CancelLastOperation() {
        _LastNumber = 0;
        _LastOperation = "Calnceling Last Operation";
        _Result = _PreviousResult;
    }

    void PrintResult() {
        cout << "Result After " << _LastOperation  << " " << _LastNumber << " is: " << _Result << "\n";
    }

    //__declspec(property(get = getFirstName, put = setFirstName)) string T;
};

int main()
{
    csCalculator Program;

    Program.Add(10);
    Program.PrintResult();

    Program.Subtract(5);
    Program.PrintResult();

    Program.Divide(2);
    Program.PrintResult();

    Program.Divide(0);
    Program.PrintResult();

    Program.Multiply(5);
    Program.PrintResult();

    Program.CancelLastOperation();
    Program.PrintResult();

    Program.Clear();
    Program.PrintResult();

    return 0;
}

