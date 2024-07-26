#include<iostream>
#include<algorithm>
using namespace std;

int minJumps(int arr[], int n){
        // Your code here
    int count = 0;
    int i = 0;
    while(i<n){
        if(arr[i] == 0){
            return 0;
        }
        else{
            i += *(max_element(&arr[i] ,(&arr[i])+i));
            count++;
        }
    } 
    return count; 
}

int main(){

    int a[] = {1,2,3,4,1,3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(a)/sizeof(int);

    cout << minJumps(a,n);

}