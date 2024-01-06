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

    cout << "1 Loan Instalment Months 500: \n";
    cout << "2 Loan Instalment Months 350: \n";
    cout << "3 Loan Instalment Months 250: \n";
    cout << "select one option: ";
    cin >> LoanInstalmentMonths;

    if(LoanInstalmentMonths == 1)
    {
        totalmonth = Loan / 500;
        cout << "Loan Instalment Months is: " << totalmonth ;
    }
    else if(LoanInstalmentMonths == 2)
    {
        totalmonth = Loan / 350;
        cout << "Loan Instalment Months is: " << totalmonth;
    }
    else if(LoanInstalmentMonths == 3)
    {
        totalmonth = Loan / 250;
        cout << "Loan Instalment Months is: " << totalmonth;
    }
    else
    {
        cout << "only this options";
    }

    sleep(3);

    return 0;
}
