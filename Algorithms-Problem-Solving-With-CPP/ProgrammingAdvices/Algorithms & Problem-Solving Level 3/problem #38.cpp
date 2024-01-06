#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;



string ReadText()
{
    string S1;
    cout << "Enter Any Text: ";
    getline(cin, S1);
    return S1;
}


string TrimLeft(string S1)
{
    for (int x = 0; x < S1.length(); x++)
    {
        if (S1[x] != ' ')
        {
            return S1.substr(x, S1.length());
        }
    }

    return "Error!";
}


string TrimRight(string S1)
{
    for (int x = S1.length() - 1; x >= 0; x--)
    {
        if (S1[x] != ' ')
        {
            return S1.substr(0, x);
        }
    }

    return "Error!";
}


string Trim(string S1)
{
    return (TrimLeft(TrimRight(S1)));
}


int main()
{

    string S1 = ReadText();

    cout << "\nText Before TrimLeft: " << S1 << " 5 ";
    cout << "\nText After TrimLeft: " << TrimLeft(S1) << " 5 ";
    cout << "\nText After TrimRight: " << TrimRight(S1) << " 5 ";
    cout << "\nText After Trim: " << Trim(S1) << " 5 ";

    return 0;
}