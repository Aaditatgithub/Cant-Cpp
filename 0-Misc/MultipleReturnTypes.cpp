#include <iostream>
#include <tuple>
using namespace std;

// A function that returns multiple values using std::tuple
std::tuple<int, double, std::string> getMultipleValues() {
    int intValue = 42;
    double doubleValue = 3.14;
    std::string stringValue = "Hello";
    
    return std::make_tuple(intValue, doubleValue, stringValue);
}

int main() {
    // Call the function to get multiple values
    auto result = getMultipleValues();
    // Access the returned values using structured bindings (C++17)
    auto [intValue, doubleValue, stringValue] = result;

    // Display the values
    std::cout << "Integer Value: " << intValue << std::endl;
    std::cout << "Double Value: " << doubleValue << std::endl;
    std::cout << "String Value: " << stringValue << std::endl;

    return 0;
}
