#include <iostream>
using namespace std;


int LinearSearch(int arr[], int size, int element){
    for(int i =0; i<size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int size, int element){
    int mid;
    int low = 0;
    int high = size -1;
    while(low < high){
        mid = (low+high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
        
    }
}
int main(){
    int size; 
    cout<<"Enter size of Array: "<<endl;
    cin>>size;
    
    int arr[size];
    
    cout<<"Enter array values: ";
    for(int i =0; i <size; i++){
        cin>>arr[i];
    }
    cout << endl;

    int element = 89;
    // int valueFinded = LinearSearch(arr, size, element);
    // cout<<element<<"at index "<< valueFinded ;
    
     int BinarySearchedValueis = BinarySearch(arr, size, element);
     cout<<element <<" is at index "<<BinarySearchedValueis;
     return 0;
     }
    
     
     
     
