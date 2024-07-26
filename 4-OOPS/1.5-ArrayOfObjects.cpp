#include<iostream>
using namespace std;

class Employee{

    int Id;
    int salary;
    public:
        void setID(void){
            cout<<"Enter ID of employee";
            cin>>Id;
        }
        void getID(void){
            cout<<"Enter ID of employee"<<Id<< endl;
        }
};

int main(){

    Employee Google[3];
    for (int i = 0; i < 3; i++)
    {
        Google[i].setID();
        Google[i].getID();
    }

}