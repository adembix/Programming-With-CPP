#include <iostream>
#include <cstdlib>
using namespace std;

int ReadNumber(int From, int To)
{
	//Function to generate a random number

	int ReadNum = rand() % (To - From + 1) + From;
	return ReadNum;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL)); // only in main

	cout << ReadNumber(1, 5) << endl;
	cout << ReadNumber(1, 10) << endl;
	cout << ReadNumber(1, 100) << endl;

	return 0;
}