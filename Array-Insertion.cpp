#include <iostream>

int traversalOfAArray(int arr[],int size) {
    // int myMarks[4] = {72, 80, 85, 86}:
    for (int i=0; i< size; i++)
    {
          std::cout << "here--->  "<<i<<" is "<<arr[i]<<std::endl;
    }
    return 0;
}


//Array insertion
int InsertionOfElement(int arr[], int size,int index, int valueToInsert, int capacity){
    if(size>=capacity){
        //  std::cout << "Array have no space, stack overflow";
         return -1;
    }
    
    for(int i=size-1; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = valueToInsert;
    return 1;
}


int main(){
    int arr[6] = {2,4,6,8,10};
    // int size = sizeof(arr)/sizeof(int);
    int size = 5;
    int capacity = 100;
    int index = 2;
    int valueToInsert = 77;
    traversalOfAArray(arr, size); //displays old array
    InsertionOfElement(arr, size, index, valueToInsert, 6);
    size ++;
    traversalOfAArray(arr, size); //displays new array after insertion
    return 0;
}
