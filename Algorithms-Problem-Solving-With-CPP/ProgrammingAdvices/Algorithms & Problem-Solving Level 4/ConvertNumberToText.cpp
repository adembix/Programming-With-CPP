#include<iostream>
using namespace std;


string NumberToText(unsigned int x) {


	if (x == 0)
	{
		return "";
	}

	string arr[] = { "","One","Two","Three","Four",
				"Five","Six","Seven","Eight","Nine","Ten",
				"Eleven","Twelve","Thirteen","Forteen","Fifteen" ,
				"Sixteen","Seventeen","Eighteen","Nineteen" };

	if (x >= 1 && x <= 19)
	{
		return arr[x] + " ";
	}

	if (x >= 20 && x <= 99)
	{
		string arr[] = { "","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety" };
		return arr[x / 10] + " " + NumberToText(x % 10);
	}

	if (x >= 100 && x <= 199)
	{
		return "One Hundred " + NumberToText(x % 100);
	}

	if (x >= 200 && x <= 999)
	{
		return NumberToText(x / 100) + "Hundreds " + NumberToText(x % 100);
	}

	if (x >= 1000 && x <= 1999)
	{
		return "One Thousand " + NumberToText(x % 1000);
	}

	if (x >= 2000 && x <= 999999)
	{
		return NumberToText(x / 1000) + "Thousands " + NumberToText(x % 1000);
	}

	if (x >= 1000000 && x <= 1999999)
	{
		return "One Million " + NumberToText(x % 1000000);
	}

	if (x >= 2000000 && x <= 999999999)
	{
		return NumberToText(x / 1000000) + "Millions " + NumberToText(x % 1000000);
	}

	if (x >= 1000000000 && x <= 1999999999)
	{
		return "One Billion " + NumberToText(x % 1000000000);
	}

	if (x >= 2000000000 && x <= 4294967295)
	{
		return NumberToText(x / 1000000000) + "Billions " + NumberToText(x % 1000000000);
	}
}


int main()
{

	unsigned int N = 0;

	cout << "Enter A Number: ";
	cin >> N;

	cout << NumberToText(N) << endl;

}