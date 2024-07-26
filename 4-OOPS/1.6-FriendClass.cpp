#include<iostream>
#include<string>
using namespace std;

//forward declaration
class complex;

class calculator{
    public:
        int add(int a, int b){
            return a+b;
        }
        int sumrealcomplex(complex , complex);
        int sumimagcomplex(complex , complex);

}calc;

class complex{

    int x, y;

    /* 
    1- Declaring friend functions inorder to access private data members of a class
    2- Altho if number of functions increases it'd be tedious to do so
    3- Can be used to allow only some members of class to access 
    */
    
    //friend int calculator :: sumrealcomplex(complex, complex);
    //friend int calculator :: sumimagcomplex(complex, complex);

    // Aliter :  declaring entire class as friend
    friend class calculator;

    public: 
        friend complex add(complex a, complex b);
        void setdata(int x, int y);
        void print(void);

}a,b;

int calculator :: sumrealcomplex(complex a, complex b){
            return (a.x + b.x);
        }

int calculator :: sumimagcomplex(complex a, complex b){
            return (a.y + b.y);
        }

void complex :: setdata(int real, int imag){
    x = real;
    y = imag;
}

void complex :: print(void){
    cout<< x <<"+"<< y <<"i"<<endl;
}

int main(){    
    a.setdata(1,4);
    b.setdata(5,7);
    
    int res = calc.sumrealcomplex(a,b);
    cout<<"The sum of real parts of a and b is: "<<res<<endl;
}   
