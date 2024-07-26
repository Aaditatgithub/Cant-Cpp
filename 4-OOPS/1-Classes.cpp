#include<iostream>
#include<vector>
#include<string>
using namespace std;

class employee{

    private: 
        int a, b ,c ;
    public:
        int d , e ;
        void setdata(int a, int b, int c);          //declaration of a member function to manipulate the attribute defining data of an object
        void getdata()
        {
            cout<<"Value of a is: "<< a << endl;
            cout<<"Value of b is: "<< b << endl;
            cout<<"Value of c is: "<< c << endl;
            cout<<"Value of d is: "<< d << endl;
            cout<<"Value of e is: "<< e << endl;
        }

};

void employee :: setdata(int a1, int b1, int c1){

    a = a1;
    b = b1;
    c = c1;
}

int main(){

    employee harry;
    harry.d = 21;
    harry.e = 45;
    harry.setdata(1,57,89);
    harry.getdata();
    
}