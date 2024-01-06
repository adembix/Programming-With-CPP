#include <iostream>
#include <string>
#include <cctype>
using namespace std;



string ReadText()
{
    string S1;
    cout << "Enter Any Text: ";
    getline(cin, S1);
    return S1;
}


string Print1stLetter(string S1)
{
    bool isFirstLetter = true;

    for (int x = 0; x < S1.length(); x++)
    {
        if (S1[x] != ' ' && isFirstLetter)
        {
            S1[x] = toupper(S1[x]);
        }

        isFirstLetter = (S1[x] == ' ') ? true : false;
    }

    return S1;
}

int main()
{

    cout << Print1stLetter(ReadText()) << endl;

    return 0;
}