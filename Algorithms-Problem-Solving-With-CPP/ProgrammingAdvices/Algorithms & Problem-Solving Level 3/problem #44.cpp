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


string RemovePunctuaions(string S1, char Punc)
{
    string sWord;

    for (int x = 0; x < S1.length(); x++)
    {
        if (!ispunct(S1[x]))
        {
            sWord += S1[x];
        }
    }

    return sWord;
}


int main()
{
    
    string S1 = "Welcome, To Jordan, Do You Like, Jordan";
    char Punc = ',';

    cout << "\nBefore Remove Punctuations:\n";
    cout << S1;

    cout << "\n\nAfter Remove Punctuations:\n";
    cout << RemovePunctuaions(S1, Punc) << endl;

    return 0;
}