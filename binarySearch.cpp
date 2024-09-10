//Condition-->An Array must be sorted 

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element) {
  int low = 0;
  int high = size -1;
  while(low<=high){
      int mid = (low + high )/2;
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
  return -1;
}

int main() {
  int arr[] = {1, 3, 5, 56,84, 103, 203, 500, 1000};
  int size = sizeof(arr) / sizeof(int);
  int element = 84 ;
  int searchIndex = binarySearch(arr, size, element);
  cout << "The element " << element << " was found at " << searchIndex << " index"<< endl;
  return 0;
}
