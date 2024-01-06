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





short CountOfWords(string S1)
{
    string delim = " ";
    short Count = 0;
    short pos = 0;
    string sWord;

    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            Count++;
        }

        S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
    {
        Count++;
    }

    return Count;
}

int main()
{
    
    cout << "\nWords Number is: " << CountOfWords(ReadText()) << endl;

    return 0;
}