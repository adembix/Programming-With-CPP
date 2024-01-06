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





void Print1stLetter(string S1)
{
    string delim = " ";

    short pos = 0; 
    string sWord;

    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            cout << sWord << endl;
        }

        S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
    {
        cout << S1 << endl;
    }
}

int main()
{
    cout << "Your String Words Are: \n\n";
    Print1stLetter(ReadText());

    return 0;
}