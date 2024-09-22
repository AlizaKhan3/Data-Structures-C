#include <iostream>

int selectionSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int minIndex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    };
};

int main() {
    int arr[] = {5,4,10,6,1,6,2};
    int size = sizeof(arr) / sizeof(int);

    selectionSort(arr, size);
    std::cout << "  Selection sort array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
