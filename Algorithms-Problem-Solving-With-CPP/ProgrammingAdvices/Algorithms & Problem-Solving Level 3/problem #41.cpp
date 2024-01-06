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


vector <string> vSplit(string S1, string& Delim)
{
    vector <string> vDataContent;

    short pos = 0;
    string sWord;

    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            vDataContent.push_back(sWord);
        }

        S1.erase(0, pos + Delim.length());
    }

    if (S1 != "")
    {
        vDataContent.push_back(S1);
    }

    return vDataContent;
}


string ReverseString(string S1, string Delim)
{
    vector <string> vString = vSplit(S1,Delim);
    string S2;

    vector <string>::iterator iter = vString.end();

    while (iter != vString.begin())
    {
        iter--;
        S2 += *iter + " ";
    }

    return S2.substr(0, S2.length() - 1);
}


int main()
{
    string S1 = ReadText();
    string Delim = " ";

    cout << "\nBefore Reverse String:\n\n";
    cout << S1 << endl;

    cout << "\nAfter Reverse String:\n\n";
    cout << ReverseString(S1,Delim) << endl;
    

    return 0;
}