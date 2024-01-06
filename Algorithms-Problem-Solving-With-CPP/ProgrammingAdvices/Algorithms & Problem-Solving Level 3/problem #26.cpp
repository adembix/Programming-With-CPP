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


string LetterToUpper(string S1)
{
    for (int x = 0; x < S1.length(); x++)
    {
        S1[x] = toupper(S1[x]);
    }
    return S1;
}

string LetterToLower(string S1)
{
    for (int x = 0; x < S1.length(); x++)
    {
        S1[x] = tolower(S1[x]);
    }
    return S1;
}

int main()
{
    string S1 = ReadText();

    cout << "\nLetter To Upper: \n";
    cout << LetterToUpper(S1) << endl;

    cout << "\nLetter To Lower: \n";
    cout << LetterToLower(S1) << endl;


    return 0;
}


