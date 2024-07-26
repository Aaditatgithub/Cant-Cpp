#include<iostream>
#include<iomanip>
using namespace std;

int c = 30;

int main(){

    int c = 20;
    int s = c + (::c);  //Scope resolution for accessing external block value
    cout << s <<endl; 

    // Reference variables
    int x = 20;
    int &y = x; // implies y is x
    cout<<"x is : "<< x <<endl;
    cout<<"y is : "<< y <<endl;

    //Constants
    const int a = 20;
 

    int l = 1, m = 65, n = 2330;
    cout<<"The value of l wo setw is: "<< l<<endl;
    cout<<"The value of m wo setw is: "<< m<<endl;
    cout<<"The value of n wo setw is: "<< n<<endl;

    cout<<"The value of l  is: "<< setw(4) << l<<endl;
    cout<<"The value of m  is: "<< setw(4) << m<<endl;
    cout<<"The value of n  is: "<< setw(4) << n<<endl; 

    // Inline functions--> function call is replaced by function code during compile time
    //                     It is request to a compiler
     


}