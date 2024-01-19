#include <iostream>
#include <iomanip>
using namespace std;

class cClass {
public:
    // big o(n^2) time complexity
    static void Print(int n) {
        for (int x = 1; x <= n; x++) {
            for (short j = 1; j <= n; j++)
                cout << setw(4) << (x * j);

            cout << "\n";
        }
    }
};

int main()
{
    cClass::Print(6);
}
