#include<iostream>
#include<string>

// I wanna change a data member, but not others by a method in class
// nor do i want to change the code i have written ie 
// remove const -> problem in modifying attributes of the instance  

class entity{
private:
    std::string m_name;
    mutable int m_debugcount;   //allowing const methods to change it
public:
    const std::string& getName() const {
        m_debugcount++;
        return m_name;
    }
};

int main(){

    entity e;
    e.getName();

}