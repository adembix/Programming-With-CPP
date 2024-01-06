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



int main()
{
    vector <string> vCutData;
    string Delim = " ";

    vCutData = vSplit(ReadText(), Delim);

    cout << "\nTokens: " << vCutData.size() << endl;

    for (string& Cut : vCutData)
    {
        cout << Cut << endl;
    }


    return 0;
}