#include<iostream>
using namespace std;

class number{

    int a;
    public:
        number()
            { a = 0; }

        number(int num)
            { a = num; }
        
        number(number &obj){ 
            cout<<"Copy Constructor called"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this project is "<< a <<endl;
        }
        

};

int main(){

    number x,y,z(45);
    x.display();
    y.display();
    z.display();
    number z1(z);
    z1.display();
    
    // copy constructor creates a replica of an object with the same parameters as that of the object given
}