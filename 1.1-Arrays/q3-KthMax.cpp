#include<iostream>
using namespace std;

int KthSmallest(int *arr, int l, int r, int k){

    int temp;
    for(int i = 0; i < k ; i++){
        for(int j = r; j > 0; j--) {
            if(arr[j] < arr[j-1]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    return arr[k-1];
}

int main(){

    //
    int arr[] = {123,76,321,98,431,1,12,4};
    int size = sizeof(arr)/sizeof(int);

    int k = 3;
    //KthSmallest(arr,0,size-1,k);
    //sort(arr, arr+size); //uses IntroSort, which is a combination of QuickSort, HeapSort and InsertionSort.
    cout << arr[k-1];

}