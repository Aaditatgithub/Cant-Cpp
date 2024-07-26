#include<iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void setroll(int a){
            roll_no = a;
        }
        void printroll(){
            cout<<"Your roll number is "<< roll_no << endl;
        }
};

class test : virtual public student{
    protected:
        float math, phy;
    public:
        void setmarks(float a, float b){
            math = a;
            phy = b;
        }
        void getmarks(){
            cout <<" Maths marks : "<< math << endl;
            cout <<" Physics marks : "<< phy << endl;
        }
};

class sports : virtual public student{
    protected:
        float sportmarks;
    public:
        void setsportmarks(float a){
            sportmarks = a; 
        }
        void getsportmarks(){
            cout <<" Sports marks : "<< sportmarks << endl;
        } 
};

class Result : public test, public sports{
    public:
        void getresult(){
            cout<<" Your final result is : "<< (math+phy+sportmarks)/3 <<"%"<< endl;
        }
};

int main(){
    
    Result sem1;
    sem1.setmarks(97.3 , 99.34);
    sem1.setsportmarks(98.32);
    sem1.getmarks();
    sem1.getsportmarks();
    sem1.getresult();
}