#include<iostream>
using namespace std;

void PrintLetterFromAToZ()
{
	for (int x = 65; x <= 90; x++)
		for (int i = 65; i <= 90; i++)
			for (int z = 65; z <= 90; z++)
				cout << char(x) << char(i) << char(z) << endl;
}

int main()
{
	PrintLetterFromAToZ();
}

________________________________________________________________________________________________


#include<iostream>
using namespace std;


void PrintLetterFromAToZ()
{
	for (int x = 65; x <= 90; x++)
	{
		for (int i = 65; i <= 90; i++)
		{
			for (int z = 65; z <= 90; z++)
			{
				cout << char(x) << char(i) << char(z);
				cout << endl;
			}
		}
	}
}

int main()
{
	PrintLetterFromAToZ();
}

________________________________________________________________________________________________

#include<iostream>
using namespace std;


void PrintLetterFromAToZ()
{
	string word = "";

	for (int x = 65; x <= 90; x++)
	{
		for (int i = 65; i <= 90; i++)
		{
			for (int z = 65; z <= 90; z++)
			{
				word += char(x);
				word += char(i);
				word += char(z);

				cout << word << endl;

				word = "";
			}
		}
		cout << "\n____________________________\n";
	}
	
}

int main()
{
	PrintLetterFromAToZ();
}
