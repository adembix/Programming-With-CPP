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


string ReplaceWordInString(string S1, string StringToReplace, string Replace)
{
    short pos = S1.find(StringToReplace);

    while (pos != std::string::npos)
    {
        S1 = S1.replace(pos, StringToReplace.length(), Replace);
        pos = S1.find(StringToReplace);
    }

    return S1;
}


int main()
{
    
    string S1 = "USA is USA";
    string StringToReplace = "USA";
    string Replace = "ALGERIA";

    cout << ReplaceWordInString(S1, StringToReplace, Replace);

    return 0;
}