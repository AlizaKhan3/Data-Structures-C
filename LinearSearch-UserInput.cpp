#include <iostream>
using namespace std;


int LinearSearch(int arr[], int size, int element){
    for(int i =0; i<size; i++){
        if(arr[i] == element){
            return arr[i];
        }
    }
    return -1;
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
    int valueFinded = LinearSearch(arr, size, element);
    cout<<valueFinded;
     return 0;
     }
