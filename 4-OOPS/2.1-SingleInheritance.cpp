#include<iostream>
using namespace std;

class Base{

    int data1; //  private members, not inheritable
    public:
        int data2;      //public members accessible
        void setdata();
        int getdata1();
        int getdata2();
};

void Base :: setdata(void){
    data1 = 10;
    data2 = 20;
}

int Base :: getdata1(void){
    return data1;
}

int Base :: getdata2(void){
    return data2;
}

              // Visibility mode of class
class Derived : public Base{    // class is being derived publicly

    int data3;
    public:
        void process();
        void display();
};

void Derived :: process(){
    data3 = data2 * getdata1();
}

void Derived :: display(){
    cout << "Value of data 1 is " << getdata1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main(){

    Derived der;
    der.setdata();
    der.process();
    der.display();

}