#include <iostream>
#include <string>
using namespace std;



string ReadText()
{
    string S1;
    cout << "Enter Any Text: ";
    getline(cin, S1);
    return S1;
}


void Print1stLetter(string sentence)
{
    bool isFirstLetter = true;

    for (short x = 0; x < sentence.length(); x++)
    {
        if (sentence[x] != ' ' && isFirstLetter)
        {
            cout << sentence[x] << endl;
        }

        isFirstLetter = (sentence[x] == ' ') ? true : false;
    }
}

int main()
{

    Print1stLetter(ReadText());

    return 0;
}

