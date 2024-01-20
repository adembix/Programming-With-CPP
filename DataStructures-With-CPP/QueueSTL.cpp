#include <iostream>
#include <queue>
using namespace std;


int main()
{
	queue<int> queNum;

	queNum.push(10);
	queNum.push(20);
	queNum.push(30);
	queNum.push(40);

	cout << "queue size: " << queNum.size() << "\n";
	cout << "queue front: " << queNum.front() << "\n";
	cout << "queue back: " << queNum.back() << "\n";

	cout << "\nQueue Elements : ";
	while (!queNum.empty()) {

		cout << queNum.front() << "  ";
		queNum.pop();
	}
}