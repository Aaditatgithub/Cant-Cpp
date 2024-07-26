#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value

class num{

    static int count;
    public:
        num(){
            count ++;
            cout<<"This is the time counstructor is called for object"<<
            count << endl;
        }

        ~num(){
            cout<<"This is the time destructor is called for object number "<< count<<endl;
            count--;
        }
};

int main(){

    cout<<"we are in main function"<<endl;

}