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


short CountLetter(string S1,char LetterSearch)
{
    short Count = 0;

    for (int x = 0; x < S1.length(); x++)
    {
        if (S1[x] == LetterSearch)
            Count++;
    }

    return Count;
}


int main()
{
    string S1 = ReadText();
    char LetterSearch = ReadLetter();

    cout << "\nLetter \"" << LetterSearch << "\" Count = " 
        << CountLetter(S1, LetterSearch) << endl;


    return 0;
}