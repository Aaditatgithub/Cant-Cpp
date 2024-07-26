#include<iostream>
#include<algorithm>
using namespace std;

void FindMinMax(int *arr, int n){

    int min,max = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Max is : " << max << "\n";
    cout << "Min is : " << min << "\n";
}

printArray(int *arr,int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){

    int arr[] = {123,12,3,65,87,987,90};
    int size = sizeof(arr)/sizeof(int);

    printArray(arr,size);
    FindMinMax(arr,size);

//Using algorithm library
//    cout <<  *max_element(&arr[0],&arr[size]) << "\n";
//    cout <<  *min_element(&arr[0],&arr[size]) << "\n";
}