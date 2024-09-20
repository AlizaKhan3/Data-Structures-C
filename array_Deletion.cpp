#include <stdio.h>

void traversal(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int deletionOfArray(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        return -1; // Index out of bounds
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements left
    }
    return size - 1; // Return new size
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int index = 7;

    printf("Original array: ");
    traversal(arr, size);

    size = deletionOfArray(arr, size, index); // Update size after deletion

    printf("Array after deletion: ");
    traversal(arr, size);

    return 0;
}
