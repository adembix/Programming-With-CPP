#include <iostream>
#include <iomanip>
using namespace std;

class cClass {
public:
    // big o(1) time complexity
    static char Print(string s) {
        return s[s.length() - 1];
    }
    // big o(n) time complexity
    static char Print2(string s) {
        for (int x = 0; x < s.length(); x++)
            if (x == s.length() - 1)
                return s[x];
    }
};

int main()
{
    cout << "big O(1): " << cClass::Print("welcome") << "\n";
    cout << "big O(n): " << cClass::Print2("welcome") << "\n";
}

