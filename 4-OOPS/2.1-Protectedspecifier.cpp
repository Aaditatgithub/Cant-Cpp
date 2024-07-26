#include<iostream>
using namespace std;

class Base{
    protected: // similar to a private variable altho it can be inherited
        int a;
    private:
        int b;
};
/*
    For a protected member:
                 |  public Derivation  | Protected Derivation | Private Derivation |
    1. Private   |  Not inherited      |     Not inherited    |     Not inherited  |       
    2. Protected |  Protected          |     Protected        |     private        | 
    3. Public    |  Public             |     Protected        |     private        | 
*/

class Derived : protected Base{


};

int main(){

    Base b;
    Derived d;

}