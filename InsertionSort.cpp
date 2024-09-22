#include <iostream>
#include <algorithm>

int insertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main() {
    int arr[] = {5,4,10,1,6,2};
    int size = sizeof(arr) / sizeof(int);

insertionSort(arr, size);
    std::cout << "  Insertion sort array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
