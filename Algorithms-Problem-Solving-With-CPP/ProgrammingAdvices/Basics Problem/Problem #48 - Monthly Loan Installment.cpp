#include <iostream>
#include <cmath>
//#include <windows.h>
#include <unistd.h>

using namespace std;

int main()
{
    int Loan;
    int LoanInstalmentMonths;
    int totalmonth;

    cout << "enter the loan: ";
    cin >> Loan;

    cout << "1 How Many Months 24: \n";
    cout << "2 How Many Months 12: \n";
    cout << "3 How Many Months 6: \n";
    cout << "select one option: ";
    cin >> LoanInstalmentMonths;

    if(LoanInstalmentMonths == 1)
    {
        totalmonth = Loan / 24;
        cout << "Loan Instalment Months is: " << totalmonth ;
    }
    else if(LoanInstalmentMonths == 2)
    {
        totalmonth = Loan / 12;
        cout << "Loan Instalment Months is: " << totalmonth;
    }
    else if(LoanInstalmentMonths == 3)
    {
        totalmonth = Loan / 6;
        cout << "Loan Instalment Months is: " << totalmonth;
    }
    else
    {
        cout << "only this options";
    }

    sleep(3);

    return 0;
}
