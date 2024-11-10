#include <iostream>

void traversalOfArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Element at index " << i << " is " << arr[i] << std::endl;
    }
}

int insertElement(int arr[], int size, int index, int valueToInsert, int capacity) {
    if (size >= capacity) {
        return -1;
    }
    
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = valueToInsert;
    return size + 1;
}

int deleteElement(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        return size;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}

int main() {
    int arr[100] = {1, 5, 6, 7};
    int size = 4;
    int capacity = 100;

    std::cout << "Original array:" << std::endl;
    traversalOfArray(arr, size);

    int indexToInsert = 3;
    int valueToInsert = 77;
    size = insertElement(arr, size, indexToInsert, valueToInsert, capacity);

    std::cout << "\nArray after insertion of " << valueToInsert << " at index " << indexToInsert << ":" << std::endl;
    traversalOfArray(arr, size);

    int indexToDelete = 5;
    size = deleteElement(arr, size, indexToDelete);

    std::cout << "\nArray after deletion at index " << indexToDelete << ":" << std::endl;
    traversalOfArray(arr, size);

    return 0;
}
