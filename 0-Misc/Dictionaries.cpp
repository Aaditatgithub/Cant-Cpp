#include <iostream>
#include <vector>
#include <utility> // For std::pair

int main() {
    // Create a vector of key-value pairs
    std::vector<std::pair<std::string, int>> keyValuePairs;

    // Add key-value pairs to the vector
    keyValuePairs.reserve(4);
    keyValuePairs.emplace_back("Alice", 25);
    keyValuePairs.emplace_back("Bob", 30);
    keyValuePairs.emplace_back("Charlie", 28);
    keyValuePairs.emplace_back("David", 22);

    // Access and display the key-value pairs
    for (const auto& pair : keyValuePairs) {
        std::cout << "Name: " << pair.first << ", Age: " << pair.second << std::endl;
    }
    return 0;
}
