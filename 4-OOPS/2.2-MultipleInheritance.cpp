#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void setroll(int);
        void getroll(void);
};

void Student :: setroll(int a){
    roll_no = a;
}

void Student :: getroll(){
    cout<<"The roll no. of the student is : "<< roll_no <<endl;
}

class Exam : public Student{
    protected:
        float math , phy;
    public:
        void setmarks(float, float);
        void getmarks();
};

void Exam :: setmarks(float a, float b){
    math = a;
    phy = b;
}

void Exam :: getmarks(){
    cout<<"Marks in maths : "<< math << endl;
    cout<<"Marks in physics : "<< phy << endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display(){
            getroll();
            getmarks();
            cout<<"Your percentage is " << (math + phy)/2 <<"%"<< endl;
        }
};

int main(){
       
    Result harry;
    harry.setroll(4);
    harry.setmarks(98.6,97.9);
    harry.display();
}