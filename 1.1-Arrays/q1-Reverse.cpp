#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void reverse_arr(int *arr, int n){
    int temp = 0;
    for(int i = 0, j = n-1; i < j ; i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main(){

    int arr[] = {10,21,32,65,23,87,9,56};
    int n = sizeof(arr) / sizeof(int);

    printArray(arr,n);
    reverse_arr(arr,n);
    // reverse(&arr[0], &arr[n]);      reverse method in algorithm lib
    printArray(arr,n);

}
