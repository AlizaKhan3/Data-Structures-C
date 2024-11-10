#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main() {
std::vector<std::string> categories = {"Shirt", "Pants", "Dress", "Jacket", "Sweater", "Skirt"};
    std::vector<int> frequencies(categories.size(), 0);
    std::string item;
    std::cout << "Enter wardrobe items (type 'done' to finish):" << std::endl;
    while (std::cin >> item && item != "done") {
        auto it = std::find(categories.begin(), categories.end(), item);
        if (it != categories.end()) {
            frequencies[std::distance(categories.begin(), it)]++;
        }
    }
    std::vector<std::pair<std::string, int>> combined;
    for (size_t i = 0; i < categories.size(); ++i) {
        combined.emplace_back(categories[i], frequencies[i]);
    }
    std::sort(combined.begin(), combined.end(), [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
        return b.second < a.second; // Sorting in descending order
    });
    std::cout << "\nFrequencies:" << std::endl;
    for (const auto& entry : combined) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
    return 0;
}
