#include <iostream>
#include <stack>
using namespace std;


int main()
{
	stack<int> stkNum;
	short n = 0;

		// push into stack with loop
	for (int x = 0; x < 10; x++)
		stkNum.push(n+=10);

	cout << "Numbers: ";
	while (!stkNum.empty()) {

		// print the top element from stack
		cout << stkNum.top() << "  ";

		// pop the top element from stack
		stkNum.pop();
	}

}