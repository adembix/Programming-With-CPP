#include <iostream>
#include <stack>
using namespace std;


int main()
{
	stack<int> stkNum1;
	stack<int> stkNum2;

		// push into on the first stack
	stkNum1.push(10);
	stkNum1.push(20);
	stkNum1.push(30);
	stkNum1.push(40);

	// push into on the second stack
	stkNum2.push(50);
	stkNum2.push(60);
	stkNum2.push(70);
	stkNum2.push(80);

		// swap function will swapping the data between first and second stack
	stkNum1.swap(stkNum2);

	cout << "\nstack one: ";
	while (!stkNum1.empty()) {

		// print the top element from stack
		cout << stkNum1.top() << "  ";

		// pop the top element from stack
		stkNum1.pop();
	}

	cout << "\nstack two: ";
	while (!stkNum2.empty()) {

		// print the top element from stack
		cout << stkNum2.top() << "  ";

		// pop the top element from stack
		stkNum2.pop();
	}

}