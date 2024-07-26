#include<iostream>

void heapify(int *arr, int size, int curr){

    while (2 * curr <= size)  {    
        int left_child = 2 * curr;
        int right_child = 2 * curr + 1;
        int max_child = left_child;

        if (right_child <= size && arr[right_child] > arr[max_child]){
            max_child = right_child;
        }
        if (arr[max_child] <= arr[curr])
        {
            return;
        }
        std::swap(arr[max_child], arr[curr]); // Use std::swap for clarity
        curr = max_child;
    }
}

void remove(int *arr, int &size){
    std::swap(arr[1], arr[size]);
    size--;
    heapify(arr,size,1);
}

void HeapSort(int *arr, int n){

    //heapify all parent nodes to max heap
    for(int i = n/2; i > 0; i--)
        heapify(arr,n,i);
        
    //remove elements from max heap
    while(n){
        remove(arr, n);
    }
}

int main(){
    int const N = 1e3;
    int arr[N] = {-1, 60, 10, 80, 50, 5, 20};
    int curr_length = 7;

    HeapSort(arr,curr_length);

    for (int i = 1; i <= curr_length; i++){
        std::cout << arr[i] << ' ';
    }
}