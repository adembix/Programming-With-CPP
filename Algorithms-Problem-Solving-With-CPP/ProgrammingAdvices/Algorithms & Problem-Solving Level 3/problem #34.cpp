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


bool CheckCountVowels(char LetterSearch)
{
    LetterSearch = tolower(LetterSearch);

    return ((LetterSearch == 'a') || (LetterSearch == 'e') || (LetterSearch == 'i') || (LetterSearch == 'o') || (LetterSearch == 'u'));
}


void CountVowels(string S1)
{
    for (int x = 0; x < S1.length(); x++)
        if (CheckCountVowels(S1[x]))
            cout << S1[x] << "  ";
}


int main()
{

    string S1 = ReadText();

    cout << "\nVowel Letters: "; 
    CountVowels(S1);

    return 0;
}