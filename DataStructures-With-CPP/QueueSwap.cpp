#include <iostream>
#include <queue>
using namespace std;


int main()
{
	queue<int> queNum1;
	queue<int> queNum2;
		
	// pushing elements into first queue
	queNum1.push(10);
	queNum1.push(20);
	queNum1.push(30);
	queNum1.push(40);

	// pushing elements into second queue
	queNum2.push(50);
	queNum2.push(60);
	queNum2.push(70);
	queNum2.push(80);

		// using swap() function to swap elements of queues
	queNum1.swap(queNum2);
		
		// printing the first queue
	cout << "\nQueue One Elements : ";
	while (!queNum1.empty()) {

		cout << queNum1.front() << "  ";
		queNum1.pop();
	}

		// printing the second queue
	cout << "\nQueue Two Elements : ";
	while (!queNum2.empty()) {

		cout << queNum2.front() << "  ";
		queNum2.pop();
	}
}