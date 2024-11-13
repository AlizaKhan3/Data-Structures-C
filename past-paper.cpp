#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>> n;
    
    //Initializing array of A,B,C
    vector<int> A(n), B(n), C(n);
    //take values for each array usinf loops
    cout<<"Enter elemnets of Array A: ";
    for(int i = 0; i<n ; i++){
        cin>> A[i];
    }
     cout<<"Enter elemnets of Array B: ";
    for(int i = 0; i<n ; i++){
        cin>> B[i];
    }
    cout<<"Enter elemnets of Array C: ";
    for(int i = 0; i<n ; i++){
        cin>> C[i];
    }
    
    //calculating the summation part:
    int summation = 0;
    for(int i = 1 ; i<=n; ++i){
        for (int j =1; j<=i; ++j){
            summation += A[i-1] *  B[j-1];
        }
    }
    int product = 1;
    for (int k =1; k<=n; ++k ){
        product *= C[k-1];
    }
    
    int result = summation * product;
    cout<<"The answer is: "<<result << endl;
    return 0;
}
