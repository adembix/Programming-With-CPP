#include <iostream>
#include <cmath>

using namespace std;


float myOperator(float a, float b, float c)
{
	const float pi = 3.14;
	float p = (a + b + c) / 2;
	float area = pi * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);

	return area;
}

int main()
{
	float a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	cout << myOperator(a, b, c);
}