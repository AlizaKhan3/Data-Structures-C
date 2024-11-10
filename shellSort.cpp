#include <iostream>
using namespace std;

void shellSort(int arr[], int n) {
    // Start with a large gap, then reduce the gap
    for (int gap = n / 2; gap >= 1; gap /= 2) {
        // Perform a gapped insertion sort for this gap size
        for (int j = gap; j < n; j++) {
            // Shift elements of arr[0..j-gap] that are greater than arr[j]
            // to one position ahead of their current position
            for (int i = j - gap; i >= 0; i -= gap) {
                if (arr[i + gap] > arr[i]) {
                    break;
                } else {
                    swap(arr[i + gap], arr[i]);
                }
            }
        }
    }
}

int main() {
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Array before sorting: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    shellSort(arr, n);
    
    std::cout << "\nArray after sorting: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
