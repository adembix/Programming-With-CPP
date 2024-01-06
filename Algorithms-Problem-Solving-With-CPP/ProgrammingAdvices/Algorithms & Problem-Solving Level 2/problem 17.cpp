#include<iostream>
using namespace std;

string ReadPaasword()
{
	string Pass ;

	cout << "Please enter a 3-Letter Password (all capital)?\n";
	cin >> Pass;

	return Pass;
}

bool PrintLetterFromAToZ(string Pass)
{
	string Word = "";
	int Counter = 0;

	for (int x = 65; x <= 90; x++)
	{
		for (int i = 65; i <= 90; i++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Word += char(x);
				Word += char(i);
				Word += char(k);
				Counter++;

				if (Word == Pass)
				{
					cout << "\nPassword is: " << Word << endl;
					return true;
				}

				cout << Word << "[" << Counter << "]" << endl;
				Word = "";
			}
		}
	}
	return false;
}




int main()
{
	PrintLetterFromAToZ(ReadPaasword()); // DO OPERATOR WITHOUT PRINT FUNCTION VALUE
	return 0;
}