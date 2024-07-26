#include<iostream>
#include<string>
using namespace std;

class complex{

    int x, y;

    public: 
        // special member function having same name as class
        // automatically invoked during instantiation
        // must be declared in public section of class
        // No return values, default arguments
        
        //complex(void);  // constructor declaration
        complex(int a, int b);

        //constructor declaration by member intializer list
        complex(int a, int b) : x(a),y(b) {
            
        }
        void setdata(int x, int y);
        void print(void);

};

// Parameterized constructor
complex :: complex(int a, int b){
    x = a; 
    y = b;
    cout<<"Object has been created"<<endl;
}

//default constructor : no arguments
/* 
    complex :: complex(void){
        x = 10; 
        y = 20;
        cout<<" Object has been created "<<endl;
    }
*/  

void complex :: setdata(int real, int imag){
    x = real;
    y = imag;
}

void complex :: print(void){

    cout<< x <<" + "<< y <<"i"<<endl;
}


int main(){

    // implicit call to parameterized constructor
    complex ans(5,6);
    ans.print();

    //Explicit Call
    complex b = complex(3,1);
    b.print();
    
}
