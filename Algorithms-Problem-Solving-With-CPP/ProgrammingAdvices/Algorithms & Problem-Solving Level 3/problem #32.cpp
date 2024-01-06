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


bool CountLetter(char LetterSearch)
{
    LetterSearch = tolower(LetterSearch);

    return ((LetterSearch == 'a') || (LetterSearch == 'e') || (LetterSearch == 'i') || (LetterSearch == 'o') || (LetterSearch == 'u'));
}


int main()
{

    char LetterSearch = ReadLetter();

    if (CountLetter(LetterSearch))
        cout << "\nYes \'" << LetterSearch << "\' is Vowel Letter\n";
    else
        cout << "\nNo \'" << LetterSearch << "\' is Not a Vowel Letter\n";


    return 0;
}
