#include<iostream>
#include<vector>
using namespace std;

int main(){

    int *p = new int(4);    // integer in heap with value 4 pointed by p pointer
    int *ptr = new int[4];  // integer array with 4 elements allocated in heap

    ptr[0] = 12;
    ptr[1] = 43;
    ptr[2] = 56;

    delete ptr;         // if one write delete[] arr; then entire array is freed
                        // for 2d use for loop for each row, and final delete[] for matrix ptr
    cout<<ptr[0];
    cout<<ptr[1];
    cout<<ptr[2];
    
}