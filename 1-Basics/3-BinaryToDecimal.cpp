#include<iostream>
#include<math.h>
using namespace std;

/*
    101011 % 10 = 

*/
int main(){

    int binary = 1010;
    int decimal = 0;
    int last = 0;
    int i = 0;

    while(binary){
        last = binary%10;
        decimal += last*pow(2,i);
        binary /= 10;
        i++;
    }
    cout << decimal;

}