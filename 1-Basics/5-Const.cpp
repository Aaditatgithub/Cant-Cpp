#include<iostream>

class entity{

    private:
    int m_x, m_y;
    public:
    //const after a method name :: works only for a object method
    int GetX() const{   //implies this class wont be able to modify data members
        // m_x = 10;    //error 
        return m_x;
    }

};

int main(){

    const int age = 90; //cannot modify const value
    std::cout << age <<"\n";

    const int *a = new int;    //integer being pointed to cannot be modified through this pointer. 
                                //However, it doesn't mean that the pointer itself is constant; 
                                // it can still be reassigned to point to another memory location.
                                
                                //same as int const* a
    // *a = 2;
    // a = (int*)&age;
    // *a = 10;
    
    int* const Age = NULL;          //cannot point to different memory location, but contents of mem can be
    const int* const ptr = NULL;    //Neither contents of mem pointed by ptr nor the location pointed
    

}