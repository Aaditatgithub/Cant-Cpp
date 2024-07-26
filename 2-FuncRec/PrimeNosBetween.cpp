#include<iostream>
using namespace std;

void prime(int a, int b){

    for(int i = a; i <= b; i++){     
        bool isprime = false; 
        for(int j = 2; j<=i ; j++){
            if(i%j==0 && i!=j)
                break;
            if(i == j)
                cout<<i<<endl;       
        } 
    }
    return;
}

int main(){

    prime(10,50);
}