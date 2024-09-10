#include <iostream>

int main() {
    int myMarks[4] = {72, 80, 85, 86};
    
    for (int i=0; i< sizeof(myMarks[0]); i++)
    {
          std::cout << "here--->  "<<i<<" is "<<myMarks[i];
    }
  

    return 0;
}
