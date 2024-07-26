#include<iostream>
using namespace std;

class Base1{
    protected: 
        int base1int;
    public:
        void setbase1(int a){
            base1int  = a;
        }
};

class Base2{
    protected: 
        int base2int;
    public:
        void setbase2(int a){
            base2int  = a;
        }
};

class Derived : public Base1, public Base2{

    public:
        void show(){
            cout<<"THe value of base1 is "<<base1int<<endl;
            cout<<"THe value of base2 is "<<base2int<<endl;
            cout<<"THe value of sum is "<< base1int + base2int <<endl;
        }
};

int main(){
    Derived aaditya;
    aaditya.setbase1(25);   
    aaditya.setbase2(3);
    aaditya.show();

}