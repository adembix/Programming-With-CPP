#include <iostream>
using namespace std;

class clsThings {
    private: // All of these items cannot be accessed from outside this class!

        short N_1;
        short N_2;

        short sum_num()
        {
            return N_1 + N_2;
        }

    public: // But these items can be accessed from outside this class!

        string S_1;
        string S_2;

        string sum_text()
        {
            return S_1 + S_2;
        }
};


int main()
{
    clsThings cObject; // this is an object

    cObject.S_1 = "HE";
    cObject.S_2 = "LLO";

    cout << endl << cObject.sum_text() << endl;
}