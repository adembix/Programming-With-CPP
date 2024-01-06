#include <iostream>
#include <string>
#include <cctype>
using namespace std;


enum enLettersStutas {Capital=0,Lower=1,All=3};


string ReadText()
{
    string S1;
    cout << "Enter Any Text: ";
    getline(cin, S1);
    return S1;
}


short CountOfAllLetters(string S1, enLettersStutas LetterStutas = ::All)
{

    if (LetterStutas == ::All)
    {
        return S1.length();
    }

    short Count = 0;

    for (int x = 0; x < S1.length(); x++)
    {
        if (LetterStutas == ::Capital && isupper(S1[x]))
            Count++;

        else if(LetterStutas == ::Lower && islower(S1[x]))
            Count++;
    }

    return Count;
}


int main()
{
    string S1 = ReadText();

    cout << "\nString Length = " << CountOfAllLetters(S1) << endl;
    cout << "Capital Letter Count = " << CountOfAllLetters(S1,::Capital) << endl;
    cout << "Lower Letter Count = " << CountOfAllLetters(S1, ::Lower) << endl;

    return 0;
}






-----------------------------------------------------------------------

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


short UpperCount(string S1)
{
    short Count = 0;

    for (int x = 0; x < S1.length(); x++)
    {
        if (isupper(S1[x]))
            Count++;
    }
    return Count;
}


short LowerCount(string S1)
{
    short Count = 0;

    for (int x = 0; x < S1.length(); x++)
    {
        if (islower(S1[x]))
            Count++;
    }
    return Count;
}


int main()
{
    string S1 = ReadText();

    cout << "\nString Length = " << S1.length() << endl;
    cout << "Capital Letter Count = " << UpperCount(S1) << endl;
    cout << "Lower Letter Count = " << LowerCount(S1) << endl;

    return 0;
}