#include <iostream>

int main() {
    int marks[] = {32,99,38,51};
   int* p = marks;
   
//1D array formula or pointer arithmatic

    std::cout << "The value of 0th index is-->" << *p << std::endl;
     std::cout << "The value of 1st index is-->" << *(p+1) << std::endl;
     std::cout << "The value of 2nd index is-->" << *(p+2)<< std::endl;
       std::cout << "The value of 3rd index is-->" << *(p+3) << std::endl;
       
 std::cout<<*(p++);  //32-->99
 std::cout<<*(++p);  //99-->38
  std::cout<<*p;

    return 0;
}
