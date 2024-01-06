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


string LowerAllString(string S1)
{
    string S2;

    for (int x = 0; x < S1.length(); x++)
        S2 += tolower(S1[x]);

    return S2;
}


vector <string> SendWordToVector(string S1, string& Delim)
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

string JoinString(vector <string>& vContent,string& sWord)
{
    for (string& sW : vContent)
    {
        sWord += sW + " ";
    }

    return sWord;
}

string SendVectorElementToString(string S1, string& WordToReplace, string& Delim, bool Mode = true)
{
    vector <string> vContent = SendWordToVector(S1, Delim);
    string sWord;

    for (string& s : vContent)
    {
        if (Mode)
        {
            if (s == WordToReplace)
            {
                s = "USA";
            }
        }

        else 
        {
            if (LowerAllString(s) == LowerAllString(WordToReplace))
            {
                s = "USA";
            }
        }
    }



    return JoinString(vContent,sWord);
}



int main()
{
    
    string S1 = "Welcome To Jordan Do You Like Jordan";
    string WordToReplace = "Jordan";
    string Delim = " ";

    cout << "\nReplace With Match Case:\n";
    cout << SendVectorElementToString(S1, WordToReplace, Delim ,true) << endl;

    cout << "\n\nReplace Without Match Case:\n";
    cout << SendVectorElementToString(S1, WordToReplace, Delim,false) << endl;

    return 0;
}



-------------------------------------------------------


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


string LowerAllString(string S1)
{
    string S2;

    for (int x = 0; x < S1.length(); x++)
        S2 += tolower(S1[x]);

    return S2;
}


vector <string> SendWordToVector(string S1, string& Delim)
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


string SendVectorElementToString(string S1, string& WordToReplace, string& Delim, bool Mode = true)
{
    vector <string> vContent = SendWordToVector(S1, Delim);
    string sWord;

    for (string& s : vContent)
    {
        if (Mode)
        {
            if (s == WordToReplace)
            {
                s = "USA";
            }
        }

        else 
        {
            if (LowerAllString(s) == LowerAllString(WordToReplace))
            {
                s = "USA";
            }
        }

            
    }

    for (string& sW : vContent)
    {
        sWord += sW + " ";
    }

    return sWord;
}



int main()
{
    
    string S1 = "Welcome To jordan Do You Like jordan";
    string WordToReplace = "Jordan";
    string Delim = " ";

    cout << "\nReplace With Match Case:\n";
    cout << SendVectorElementToString(S1, WordToReplace, Delim ,true) << endl;

    cout << "\n\nReplace Without Match Case:\n";
    cout << SendVectorElementToString(S1, WordToReplace, Delim,false) << endl;

    return 0;
}