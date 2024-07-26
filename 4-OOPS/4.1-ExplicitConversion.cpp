#include <iostream>
#include <string>

class Entity {
private:
    std::string name;
    int age;

public:
    // Explicit constructor
    explicit Entity(const std::string& _name, int _age)
        : name(_name), age(_age) {}

    // Getter for name
    std::string getName() const { return name; }

    // Getter for age
    int getAge() const { return age; }

    // Implicit conversion to string (using getName)
    operator std::string() const {
        return "Entity: " + name + ", Age: " + std::to_string(age);
    }

    // Explicit conversion to int (using getAge)
    explicit operator int() const {
        return age;
    }
};

int main() {
    // Creating an Entity object using explicit constructor
    Entity entity("John", 30);

    // Implicit conversion to string and printing
    std::string entityStr = entity;
    std::cout << "Implicit conversion: " << entityStr << std::endl;

    // Explicit conversion to int and printing
    int entityAge = entity.getAge();
    std::cout << "Explicit conversion: " << entityAge << std::endl;

    return 0;
}
