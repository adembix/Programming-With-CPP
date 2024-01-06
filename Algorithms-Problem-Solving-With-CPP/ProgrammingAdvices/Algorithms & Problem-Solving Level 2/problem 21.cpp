#include <iostream>
#include <cstdlib>
using namespace std;

int ReadNumber()
{
	int Number;
	do
	{
		cout << "Enter The Number: ";
		cin >> Number;

	} while (Number < 1);

	return Number;
}

int RandomCharacter(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}

char PrintSpecialCharacter()
{
	return char(45);
}

string PrintLetter(int Number)
{
	short Counter = 1;
	string Word = "";

	for (int x = 1; x <= Number; x++)
	{
		Word = "";
		Counter = 1;

		for (int i = 1; i <= 4; i++)
		{
			for (int k = 1; k <= 4; k++)
			{
				Word = Word + char(RandomCharacter(65, 90));

			}
			if (Counter < 4)
			{
				Word += PrintSpecialCharacter();
				Counter++;
			}
		}
	}
	return Word;
}

void PrintAllThings(int Number)
{
	for (int x = 1; x <= Number; x++)
	{
		cout << PrintLetter(Number) << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	PrintAllThings(ReadNumber());

	return 0;
}


________________________________________________________________________________________________________________________



#include <iostream>
#include <cstdlib>
using namespace std;


enum enCharType {CapitalLetter = 1};


int ReadNumber()
{
	int Number;
	do
	{
		cout << "Enter The Number: ";
		cin >> Number;

	} while (Number < 1);

	return Number;
}


int RandomCharacter(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}


char GetSpecialCharacter(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::CapitalLetter:
	{
		return char(RandomCharacter(65, 90));
		break;
	}

	}
}


string GenerateWord(enCharType CharType, short Lenght)
{
	string Word = "";

	for (int x = 1; x <= Lenght; x++)
	{
		Word += GetSpecialCharacter(CharType);
	}
	return Word;
}


string GenerateKey()
{
	string Key = "";

	Key = GenerateWord(enCharType::CapitalLetter, 4) + '-';
	Key += GenerateWord(enCharType::CapitalLetter, 4) + '-';
	Key += GenerateWord(enCharType::CapitalLetter, 4) + '-';
	Key += GenerateWord(enCharType::CapitalLetter, 4) ;

	return Key;
}


void GenerateKeys(int Number)
{
	for (int x = 1; x <= Number; x++)
	{
		cout << "Key[" << x << "] : " << GenerateKey() << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	GenerateKeys(ReadNumber());

	return 0;
}