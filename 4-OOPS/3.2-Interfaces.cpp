// Function overriding is basically implementation of a function with same name in the base class
// and the derived class, here the virtual keyword is used during the definition provision or declaration in the
// base class. This results in creation of a virtual table (VTable) that consists of all such functions with same 
// name within the derived classes. At Runtime, the decision as to which function is to be called is made by 
// looking up the table. Also called as dynamic dispatch or runtime polymorphism.

// Pure virtual functions (also called as Interfaces) rather providing the defintion in base class force 
// the child class for the provision of the definition.

#include<iostream>
#include<string>

class entity{
 public:
    virtual std::string Getname(){return "Entity";}
};

class Player : public entity{
private:
    std::string m_name;
public:
    Player(const std::string& name) : m_name(name) {}
    std::string Getname() override { return m_name; }
}; 