#include<iostream>
using namespace std;

int add(int a, int b, int c){
    cout<<"3 argument wala func"<<endl;
    return a+b+c;
}

int add(float a, int b){
    cout<<"2 argument wala func"<<endl;
    return a+b;
}

int main(){

    cout<< add(10 , 20)<< endl ;
}