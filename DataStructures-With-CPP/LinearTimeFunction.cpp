#include <iostream>
#include <iomanip>
using namespace std;

class cClass {
public:
    // big o(n) time complexity
    static void Print(int n) {
        for (int x = 1; x <= n; x++)
            cout << x * 10 << " ";
    }
};

int main()
{
    cClass::Print(10);
}