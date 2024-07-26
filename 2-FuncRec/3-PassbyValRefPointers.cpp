#include <iostream>

// Function taking an int pointer argument (pass by reference using pointers)
void modifyByReferenceUsingPointer(int* ptr) {
    *ptr = 10; // This modification will affect the original variable
}

// Function taking an int reference argument (pass by reference using reference variables)
void modifyByReferenceUsingReference(int& ref) {
    ref = 10; // This modification will affect the original variable
}

// Function taking an int argument by value
void modifyByValue(int x) {
    x = 10; // This modification will not affect the original variable
}


int main() {
    int num1 = 5;
    int num2 = 5;
    int num3 = 5;

    // Pass by value
    std::cout << "Before modifyByValue: " << num1 << std::endl;
    modifyByValue(num1);
    std::cout << "After modifyByValue: " << num1 << std::endl; // Output: 5 (original variable remains unchanged)

    // Pass by reference using pointers
    std::cout << "Before modifyByReferenceUsingPointer: " << num1 << std::endl;
    modifyByReferenceUsingPointer(&num1); // Pass the address of 'num1'
    std::cout << "After modifyByReferenceUsingPointer: " << num1 << std::endl; // Output: 10 (original variable is modified)

    // Pass by reference using reference variables
    std::cout << "Before modifyByReferenceUsingReference: " << num2 << std::endl;
    modifyByReferenceUsingReference(num2);
    std::cout << "After modifyByReferenceUsingReference: " << num2 << std::endl; // Output: 10 (original variable is modified)

    // Using pointers for pass by reference behavior
    int* ptr = &num3; // Pointer to 'num3'
    std::cout << "Before using pointer: " << num3 << std::endl;
    *ptr = 10; // Modify value indirectly through the pointer
    std::cout << "After using pointer: " << num3 << std::endl; // Output: 10 (original variable is modified)

    return 0;
}
