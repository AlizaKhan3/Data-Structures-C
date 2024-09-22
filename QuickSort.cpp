#include <iostream>
#include <algorithm>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int lowerBound, int upperBound) {
    int pivotElement = arr[lowerBound];
    int start = lowerBound;
    int end = upperBound;

    while (start < end) {
        while (arr[start] <= pivotElement) {
            start++;
        }
        while (arr[end] > pivotElement) {
            end--;
        }
        if (start < end) {
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[lowerBound], arr[end]);
    return end;
}

void QuickSort(int arr[], int lowerBound, int upperBound) {
    if (lowerBound < upperBound) {
        int location = partition(arr, lowerBound, upperBound);
        QuickSort(arr, lowerBound, location - 1);
        QuickSort(arr, location + 1, upperBound);
    }
}

int main() {
    int arr[] = {7, 6, 10, 5, 9, 2, 1, 15, 7};
    int size = sizeof(arr) / sizeof(int);

    QuickSort(arr, 0, size - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
