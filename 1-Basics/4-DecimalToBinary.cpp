#include<iostream>
using namespace std;

int main(){

    int decimal = 4;
    int binary = 0; 
    int parity = 0;
    int power = 1;

    while(decimal){
        parity = decimal%2;
        binary += parity*power;
        power*=10; 
        decimal /= 2;
    }
    
    cout<< binary;
}