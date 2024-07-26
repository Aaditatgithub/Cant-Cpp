#include<iostream>
#include<string>
using namespace std;

class complex{

    int x, y;
    public: 
        friend complex add(complex a, complex b);
        void setdata(int x, int y);
        void print(void);

}a,b;

void complex :: setdata(int real, int imag){
    x = real;
    y = imag;
}

void complex :: print(void){

    cout<< x <<"+"<< y <<"i"<<endl;
}

complex add(complex a, complex b){

    complex c;
    // c.x = a.x + b.x; ---> can do directly if data members are public
    // c.y = a.y + b.y;
    c.setdata((a.x +b.x),(a.y+b.y));
    return c;
}

int main(){

    complex ans;
    a.setdata(21,18);
    a.print();

    b.setdata(11,9);    
    b.print();

    ans = add(a,b);
    ans.print();
    
}

/*
Properties of Friend function:
    1- Not in scope of class
    2. Cannot be called from an object of that class
    3. Usually has objects as arguments
    4. Can be declared in public or private specifier
*/
