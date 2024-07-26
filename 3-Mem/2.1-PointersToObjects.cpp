#include<iostream>
using namespace std;

class complex{
    int r, i;
    public:
        void set(int a, int b){
            r = a; i = b;
        }
        void get(){
            cout << "Complex Number is : " << r << " + " << i<< "i" << endl;
        }
};


int main(){
     
    //complex c1;     
    //complex *ptr = &c1;

    complex *ptr = new complex;
    ptr->set(11,21);
    ptr->get();

    //For Array of Objects -- here 3
    complex *arr = new complex[3];

}