#include <iostream>
#include <string>
#include <cctype>
using namespace std;



char ReadText()
{
    char S1;
    cout << "Enter Any Text: ";
    cin >> S1;
    return S1;
}


char ConvertLetter(char S1)
{
    return (isupper(S1) ? tolower(S1) : toupper(S1));
}



int main()
{
    char S1 = ReadText();

    cout << ConvertLetter(S1) << endl;

    return 0;
}