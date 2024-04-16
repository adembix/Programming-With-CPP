#include <iostream>
using namespace std;

template <typename T> T myMax(T f, T l) {
	return (f > l) ? f : l;
}

int main()
{

	cout << "integer template: " << myMax<int>(16, 46) << endl;
	cout << "float template: " << myMax<float>(46.5, 46.6) << endl;
	cout << "bool template: " << myMax<bool>(1, 0) << endl;

}
