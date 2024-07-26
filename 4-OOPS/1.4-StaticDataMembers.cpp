#include<iostream>
using namespace std;

// remember that count variable is same for all objects, cuz of incrementing the value
// The value is changing, and when incremented, count variable changes for all  

class Employee{

    static int count;   // also called as class variables, assigned to class and not the object
    int id;
    public:
        void setdata(void){
            cout<<"ENTER ID: ";
            cin>>id;
            count++;
        }
        void getdata(void){
            cout<<"The ID of Employee is: "<< id // " and employee no is: "<< count 
                    << endl;
        }

        // Static Functions : can be used to access private static data members of a class
        // class name provision is sufficient for the same
        // can be improvised via individual instances as well

        static void getcount(void){
            
            cout<<" The value of count is: "<< count << endl;
        }

};

// Count is a static data member of employee class
int Employee :: count;  // Default value is zero


int main(){
    Employee Aadi,Rohan;
    //Aadi.id = 1 ---> cannot do so since id is private member

    Aadi.setdata();
    Aadi.getdata();
    Employee :: getcount();

    Rohan.setdata();
    Rohan.getdata();
    Employee :: getcount();
}