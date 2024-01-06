#include <iostream>
#include <string>
using namespace std;

void PrintHeaderTable()
{
	cout << "\t\t\t\t\t Multipliacation Table From 1 To 10\n\n";

	for (int z = 1; z <= 10; z++)
	{
		cout << "\t " << z << "     ";
	}
	cout << "\n_________________________________________________________________________________________\n";


}

string ColumSperator(int x)
{
	if (x < 10)
		return "  |";
	else
		return " |";
}


void PrintLoops()
{
	PrintHeaderTable();

	for (int x = 1; x <= 10; x++)
	{
		cout  << "  " << x << ColumSperator(x) << "\t";

		for (int i = 1; i <= 10; i++)
		{
			cout << x * i << "\t";
		}

		cout << "\n";
	}
}

int main()
{
	PrintLoops();
}