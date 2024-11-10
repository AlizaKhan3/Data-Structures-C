Combination Code in C++:

#include <iostream>
#include <vector>
#include <algorithm>
void printCombinations(std::vector<int>& list, std::vector<int>& combination, int start) {
    for (int num : combination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    for (int i = start; i < list.size(); ++i) {
        combination.push_back(list[i]);
        printCombinations(list, combination, i + 1);
        combination.pop_back(); // Backtrack
    }
}
int main() {
    std::vector<int> list;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        list.push_back(num);
    }
    std::vector<int> combination; // To hold current combination
    printCombinations(list, combination, 0);
    return 0;
}
