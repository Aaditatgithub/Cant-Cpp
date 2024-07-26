#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
const int N = 1e3;

//ins,bubble,sel,bucket,quick,heap,merge,count, Baap-->Intro
//binary tree with all levels filled(last level for a subtree can be incomplete but it must be left filled)
//Types -> MinHeap : parent node has value less than child nodes
//      -> MaxHeap : parent node has value more than child nodes  
//Represenation using array
    // root -> index 1 :: left child -> 2*i :: right child -> 2*i + 1 :: Parent node -> i/2
    // BC -> O(1) : WC -> O(logn) [height of complete binary tree -> log(num_nodes)]
    // In Heaps, leaf nodes start from n/2 + 1 index

void insertMinHeap(int *minHeap, int &size, int value){

    size++;
    minHeap[size] = value;
    int curr = size;
    while(curr/2 > 0 && (minHeap[curr/2] < minHeap[curr])){
        swap(minHeap[curr/2], minHeap[curr]);
        curr /= 2;
    }
} 

void insertMaxHeap(int *maxHeap, int &size, int value){
    size++;
    maxHeap[size] = value;
    int curr = size;
    while(curr/2 > 0 && maxHeap[curr/2] > maxHeap[curr]){
        swap(maxHeap[curr/2],maxHeap[curr]);
        curr /= 2;
    }
}

void deletionMinHeap(int *minHeap, int &size){
    //we can only delete root node from a heap

    minHeap[1] = minHeap[size];
    size--; 
    int curr = 1;

    while(2*curr <= size){//looping till curr has child nodes
        int leftchild = 2*curr;
        int rightChild = 2*curr + 1;
        int minChild = leftchild;

        if(rightChild <= size && minHeap[rightChild] < minHeap[leftchild]){
            minChild = rightChild;
        }
        if(minHeap[minChild] >= minHeap[curr])
            return;

        swap(minHeap[minChild], minHeap[curr]);
        curr = minChild;
    }
}

void deletionMaxHeap(int *maxHeap, int &size){
    //we can only delete root node from a heap

    maxHeap[1] = maxHeap[size];
    size--; 
    int curr = 1;

    while(2*curr <= size){      //looping till curr has child nodes
        int leftchild = 2*curr;
        int rightChild = 2*curr + 1;
        int maxChild = leftchild;

        if(rightChild <= size && maxHeap[rightChild] > maxHeap[leftchild]){
            maxChild = rightChild;
        }
        if(maxHeap[maxChild] <= maxHeap[curr])
            return;

        swap(maxHeap[maxChild], maxHeap[curr]);
        curr = maxChild;
    }
}

void Heapify_minheap(int *minHeap, int &size, int curr){
    
    while(2*curr <= size){
        int leftchild = 2*curr;
        int rightChild = 2*curr + 1;
        int minChild = leftchild;

        if(rightChild <= size && minHeap[rightChild] < minHeap[minChild]){
            minChild = rightChild;
        }
        if(minHeap[minChild] >= minHeap[curr])
            return;
        swap(minHeap[minChild], minHeap[curr]);
        curr = minChild;
    }
}

void Heapify_maxheap(int *arr, int &length, int curr){
    
    while (2 * curr <= length)
    {
        int left_child = 2 * curr;
        int right_child = 2 * curr + 1;
        int max_child = left_child;

        if (right_child <= length && arr[right_child] > arr[max_child]) 
            max_child = right_child;
        
        if (arr[max_child] <= arr[curr])
            return;
        
        swap(arr[max_child], arr[curr]); // Use std::swap for clarity
        curr = max_child;
    }
}

int main(){

    int arr[N] = {-1, 60, 10, 80, 50, 5, 20, 70};
    int curr_length = 7;

    for (int i = curr_length / 2; i > 0; i--)
        Heapify_minheap(arr, curr_length, i);

    for (int i = 1; i <= curr_length; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}