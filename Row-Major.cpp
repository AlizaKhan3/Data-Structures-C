#include <iostream>
using namespace std;

int main() {
    int oldRows, oldCols, newRows, newCols;
    cout << "Enter old number of rows: ";
    cin >> oldRows;
    cout << "Enter old number of columns: ";
    cin >> oldCols;
    int* arr = new int[oldRows * oldCols];
    cout << "Enter old array elements (row-major order):" << endl;
    for (int i = 0; i < oldRows; i++) {
        for (int j = 0; j < oldCols; j++) {
            int index = i * oldCols + j
            cin >> arr[index];
        }
    }
    cout << "\nOld Array in Row-Major Order:" << endl;
    for (int i = 0; i < oldRows; i++) {
        for (int j = 0; j < oldCols; j++) {
            int index = i * oldCols + j;
            cout << arr[index] << " ";
        }
        cout << endl;
    }

    cout << "\nEnter new number of rows: ";        //New Array with resizing
    cin >> newRows;
    cout << "Enter new number of columns: ";
    cin >> newCols;
    int* newArr = new int[newRows * newCols];

    for (int i = 0; i < oldRows; i++) {                         // Copy elements from old array to new array
        for (int j = 0; j < oldCols; j++) {
            // Ensure we stay within the new array's boundaries
            if (i < newRows && j < newCols) {
                newArr[i * newCols + j] = arr[i * oldCols + j];
            }
        }
    }
 // Fill remaining elements with 0 in case new array is larger
    for (int i = oldRows; i < newRows; i++) {
        for (int j = oldCols; j < newCols; j++) {
            newArr[i * newCols + j] = 0;
        }
    }

    // Display the updated new array in row-major order
    cout << "\nUpdated Array in Row-Major Order:" << endl;
    for (int i = 0; i < newRows; i++) {
        for (int j = 0; j < newCols; j++) {
            cout << newArr[i * newCols + j] << " ";
        }
        cout << endl;
    }
    delete[] arr;                 // Free the allocated memory
    delete[] newArr;

    return 0;
}
