#include <iostream>
using namespace std;

class Array {
private:
	int size;
	int length;
	int* items;

public:
	Array(int arrsize) {
		size = arrsize;
		length = 0;
		items = new int[size];
	}

	void FillArray() {

		do {
			cout << "How Many Element Want to Add: ";
			cin >> length;

		} while (length > size);
		// Big O(n) Complexty
		for (int x = 0; x < length; x++) {
			cout << "Enter Element [" << x << "] : ";
			cin >> *(items + x);
		}
	}

	void DisplayElements() {
		printf("\nDisplay Array Elements: \n");
		// Big O(n) Complexty
		for (int x = 0; x < length; x++) {
			printf("Element [%d] : %d \n", x, *(items + x));
		}
	}

	int Search(int n) {
		// Big O(n) Complexty
		for (int x = 0; x < length; x++) {
			if (*(items + x) == n)
				return x;
		}

		return -1;
	}

	void Append(int newitem) {
		if (length < size) {
			*(items + length) = newitem;
			length++;
		}
		else
			cout << "Array is Full\n";
	}

	void Insert(int index, int newitem) {
		// Big O(n) Complexty
		if (index >= 0 && index < size) {
			for (int x = length; x > index; x--)
				*(items + x) = *(items + x - 1);

			*(items + index) = newitem;
			length++;
		}
		else
			cout << "\nindex out of range :| \n";
	}

	void Replace(int index, int replace_value) {
		if (index >= 0 && index < size) {
			for (int x = 0; x < length; x++) {
				if (x == index)
					*(items + x) = replace_value;
			}
		}
		else
			cout << "\nindex out of range :| \n";
	}

	void DeleteElement(int index) {
		// Big O(n) Complexty
		if (index >= 0 && index < size) {
			for (int x = index; x < length - 1; x++)
				*(items + x) = *(items + (x + 1));

			length--;
		}
		else
			cout << "\nindex out of range :| \n";
	}

	void Enlarge(int arrsize) {
		if (arrsize > size) {
			size = arrsize;
			int* temp = items;
			items = new int[size];

			for (int x = 0; x < length; x++)
				*(items + x) = *(temp + x);

			delete[] temp;
		}

	}

	int getSize() {
		return size;
	}

	int getLength() {
		return length;
	}

	~Array() {
		delete[] items;
	}
};

int main()
{

	int index = 0;
	int arrsize = 0;
	cout << "Enter The Array Size: ";
	cin >> arrsize;

	Array obj(arrsize);

	obj.FillArray();
	obj.DisplayElements();

	cout << "Enter The Value To Search For: ";
	cin >> arrsize;

	cout << "Index is: " << obj.Search(arrsize);

	cout << "\nEnter The Value To Append it on Array: ";
	cin >> arrsize;

	obj.Append(arrsize);
	obj.DisplayElements();

	cout << "Enter The Index And Item Value To Insert: ";
	cin >> index >> arrsize;

	obj.Insert(index, arrsize);
	obj.DisplayElements();

	cout << "Enter The Index To Delete: ";
	cin >> index;

	obj.DeleteElement(index);
	obj.DisplayElements();

	cout << "Enter The Index And Value To Replace: ";
	cin >> index >> arrsize;

	obj.Replace(index, arrsize);
	obj.DisplayElements();

	cout << "array size " << obj.getSize() << "\n";

	cout << "Enter The New Size To Enlarge: ";
	cin >> arrsize;

	obj.Enlarge(arrsize);
	obj.DisplayElements();
	cout << "array size " << obj.getSize() << "\n";

}