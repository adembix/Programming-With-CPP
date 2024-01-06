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


string JoinString(vector <string>& vDataContent, string& Delim)
{
    string sWord;
   
    for (string& Cut : vDataContent)
    {
        sWord = sWord + Cut + Delim;
    }

    return sWord.substr(0,sWord.length() - Delim.length());
}



int main()
{
    vector <string> vCutData = {"adem", "ahmed","aya","zack"};
    string Delim = ",";

    cout << JoinString(vCutData, Delim) << endl;


    return 0;
}