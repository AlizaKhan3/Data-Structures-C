#include <iostream>
#include <vector>
#include <algorithm>
void printPermutations(std::vector<int> subList) {
    std::sort(subList.begin(), subList.end());     
    do {
        for (int num : subList) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } while (std::next_permutation(subList.begin(), subList.end()));
}
void generateSubsets(std::vector<int>& list, int index, std::vector<int>& current) {
    if (index == list.size()) {
        if (!current.empty()) { 
            printPermutations(current);
            std::cout << std::endl;
        }
        return;
    }
    current.push_back(list[index]);                
    generateSubsets(list, index + 1, current);
    current.pop_back();                                   
    generateSubsets(list, index + 1, current);
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
    std::vector<int> current; 
    generateSubsets(list, 0, current);
    return 0;
}
