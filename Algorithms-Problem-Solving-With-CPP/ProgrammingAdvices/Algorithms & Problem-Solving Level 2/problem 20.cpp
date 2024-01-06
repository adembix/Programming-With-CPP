#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
	int enRandomGen = rand() % (To - From + 1) + From;
	return enRandomGen;
}

char PrintFunction(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::SamallLetter:
	{
		return char(RandomNumber(97, 122));
		break;
	}
	case enCharType::SpecialCharacter:
	{
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::Digit:
	{
		return char(RandomNumber(48, 57));
		break;
	}

	}
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL)); // only in main

	cout << PrintFunction(enCharType::CapitalLetter) << endl;
	cout << PrintFunction(enCharType::SamallLetter) << endl;
	cout << PrintFunction(enCharType::SpecialCharacter) << endl;
	cout << PrintFunction(enCharType::Digit) << endl;

	return 0;

}