#include <iostream>
using namespace std;

class cClass {
public:

    static void MatrixDataStructure(int arr[3][3], int rows, int cols) {
            // Big O(n^2) //
        for (int x = 0; x < rows; x++) {
            for (int j = 0; j < cols; j++)
                cout << arr[x][j] << "  ";

            cout << "\n";
        }
    }
};

int main()
{
    int arr[3][3] = { {1,2,3,},{4,5,6},{7,8,9} };
    cClass::MatrixDataStructure(arr, 3, 3);
}

