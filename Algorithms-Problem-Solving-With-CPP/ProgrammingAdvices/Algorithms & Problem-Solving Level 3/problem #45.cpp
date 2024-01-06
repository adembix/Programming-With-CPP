#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

struct stClientData
{
    string AccountNumber;
    string Name;
    string Phone;
    string PinCode;
    double AccountBalance;
};




stClientData ReadClientData()
{
    stClientData sClient;

    cout << "Enter Account Number: ";
    getline(cin, sClient.AccountNumber);

    cout << "Enter Pincode: ";
    getline(cin, sClient.PinCode);

    cout << "Enter Name: ";
    getline(cin, sClient.Name);

    cout << "Enter Phone: ";
    getline(cin, sClient.Phone);

    cout << "Enter Account Balance: ";
    cin >> sClient.AccountBalance;

    return sClient;
}


string ConvertRecordToLine(stClientData& sClient, string Seperator = "#//#")
{
    string S1;

    S1 = sClient.AccountNumber + Seperator;
    S1 += sClient.PinCode + Seperator;
    S1 += sClient.Name + Seperator;
    S1 += sClient.Phone + Seperator;
    S1 += to_string(sClient.AccountBalance);

    return S1;
}

int main()
{
    string S1;
    string Delim = "#//#";
    stClientData sClient;


    cout << "Please Enter Client Recond:\n\n";
    sClient = ReadClientData();

    cout << "\n\nClient Recond For Saving is:\n";
    cout << ConvertRecordToLine(sClient) << endl;
    return 0;
}