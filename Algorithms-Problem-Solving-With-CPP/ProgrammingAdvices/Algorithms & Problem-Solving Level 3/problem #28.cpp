

#include <iostream>
#include <string>
#include <cctype>
using namespace std;


enum enLettersStutas {Capital=0,Lower=1};


string ReadText()
{
    string S1;
    cout << "Enter Any Text: ";
    getline(cin, S1);
    return S1;
}


short CountOfAllLetters(string S1, enLettersStutas LetterStutas)
{
    short Count = 0;

    for (int x = 0; x < S1.length(); x++)
    {
        if (LetterStutas == ::Capital && isupper(S1[x]))
            Count++;

        if (LetterStutas == ::Lower && islower(S1[x]))
            Count++;
    }

    return Count;
}


int main()
{
    string S1 = ReadText();

    cout << "\nString Length = " << S1.length() << endl;
    cout << "Capital Letter Count = " << CountOfAllLetters(S1,::Capital) << endl;
    cout << "Lower Letter Count = " << CountOfAllLetters(S1, ::Lower) << endl;

    return 0;
}





___-____-_________________-___-____-_________________-____-____-_________________-____-____-_________________-_


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


string ConvertLetter(string S1)
{
    for (int x = 0; x < S1.length(); x++)
    {
        S1[x] = (isupper(S1[x]) ? tolower(S1[x]) : toupper(S1[x]));
    }
    return S1;
}


int main()
{
    string S1 = ReadText();

    cout << ConvertLetter(S1) << endl;

    return 0;
}