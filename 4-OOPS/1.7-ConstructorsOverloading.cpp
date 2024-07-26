#include<iostream>
#include<string>
using namespace std;

class complex{

    int x, y;

    public: 
        // Parameterized constructor
        complex(int a, int b){
            x = a; 
            y = b;
            cout<<"Object has been created"<<endl;
        }

        complex(int a){
            x = a;
            y = 0;
        }

        complex(void){
            x = 0;
            y = 0;
        }
        
        void setdata(int x, int y);
        void print(void);

};

void complex :: setdata(int real, int imag){
    x = real;
    y = imag;
}

void complex :: print(void){

    cout<< x <<" + "<< y <<"i"<<endl;
}


int main(){
    complex z(5);
    z.print();
}
