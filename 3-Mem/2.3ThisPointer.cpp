#include<iostream>
using namespace std;

class A{
    int a;
    public:
        // The 'this' pointer is used to retrieve the object's a
       // hidden by the local variable 'a'
        A &setData(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4).getData();
    return 0;
}
