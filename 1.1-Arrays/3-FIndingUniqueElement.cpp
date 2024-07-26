#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,1,2,3,2,5,6,6};
    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i] == arr[j]){
                arr[i] = arr[j] = -1;
            }
        }
    }
        for (int i = 0; i < n; i++){
            if(arr[i]!=-1){
                cout<< arr[i];            
            }
            
        }

}