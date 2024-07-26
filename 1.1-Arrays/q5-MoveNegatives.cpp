#include<iostream>
using namespace std;

printArray(int *arr,int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void SeparatePosandNeg(int *arr, int n){

    int temp;
    int i = 0;
    int j = n-1;
    while(i < j){
        if(arr[i] < 0){
            i++;
        }
        else{
            if(arr[j] < 0){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
            else{
                j--;
            }

        }
    }        
}

int main(){

    int arr[] = {-10,21,32,65,0,-87,-9,-56};
    int n = sizeof(arr) / sizeof(int);

    printArray(arr,n);
    SeparatePosandNeg(arr,n);
    printArray(arr,n);

}