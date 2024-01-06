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


char ReadLetter()
{
    char Letter;
    cout << "\nPlease Enter Your Letter: ";
    cin >> Letter;
    return Letter;
}


char InvertLetterCase(char S1)
{
    return islower(S1) ? toupper(S1) : tolower(S1);
}

short CountLetter(string S1, char LetterSearch, bool MatchCase = true)
{
    short Count = 0;

    for (int x = 0; x < S1.length(); x++)
    {
        if (MatchCase)
        {
            if (S1[x] == LetterSearch)
                Count++;
        }
        else
        {
            if (tolower(S1[x]) == tolower(LetterSearch))
                Count++;
        }
    }

    return Count;
}


int main()
{
    string S1 = ReadText();
    char LetterSearch = ReadLetter();

    cout << "\nLetter \'" << LetterSearch << "\' Count = " << CountLetter(S1, LetterSearch);
    cout << "\nLetter \'" << LetterSearch << "\' Or \'" << InvertLetterCase(LetterSearch) << "\' Count = " << CountLetter(S1, LetterSearch, false);


    return 0;
}