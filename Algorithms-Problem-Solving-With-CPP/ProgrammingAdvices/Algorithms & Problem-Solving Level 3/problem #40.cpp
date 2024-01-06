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


string JoinString(string Arr[4], short Length, string& Delim)
{
    string sWord;

    for (int x = 0; x < Length; x++)
    {
        sWord = sWord + Arr[x] + Delim;
    }

    return sWord.substr(0, sWord.length() - Delim.length());
}


int main()
{
    vector <string> vCutData = {"adem", "ahmed","aya","zack"};
    string Arr[4] = { "adem", "ahmed","aya","zack" };
    string Delim = " ";

    cout << "\nVector After Join:\n";
    cout << JoinString(vCutData, Delim) << endl;

    cout << "\nArray After Join:\n";
    cout << JoinString(Arr, Arr->length(), Delim) << endl;


    return 0;
}