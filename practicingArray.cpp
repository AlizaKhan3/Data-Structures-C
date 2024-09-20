//Dynamic Array complete practice
#include <iostream>
//array traversal
int traversal(int arr[], int size){
    for(int i; i<size ; i++){
        std::cout<<"index # "<< i<<" , value = " << arr[i]<<std::endl;
    }
    return -1;
}

int insertionOfArray(int arr[], int size, int element, int index, int arrCapacity){
    if(size>=arrCapacity){
        std::cout<<"Stack Overflow"<<std::endl;
        return -1;
    }
    for(int i=size-1 ; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 0;
}


int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    int element = 777;
    int index = 1;
    int arrCapacity = 100;
    traversal(arr, size);  //prints before insertion
    insertionOfArray(arr,size,element,index,arrCapacity);
    std::cout<<"Array after insertion is below---->"<< std::endl;
    traversal(arr, size);  ///prints after insertion
    
    return 0;
}
