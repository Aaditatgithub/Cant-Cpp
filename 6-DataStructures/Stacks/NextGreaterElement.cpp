#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// array :: 4 3 9 1 6 8 2
// next grter ele array :: 9 9 -1 6 8 -1 -1 

// for increasing curve :: nge is next element
// for decreasing curve :: stack

int main(){

    vector<int> arr{1,7,3,5,8,0,12,7,0,12};
    int size {arr.size()};

    vector<int> output(size);
    stack<int> indexes;
    indexes.push(0);

    for(int i = 1; i < size; i++){
        while(!indexes.empty() && arr[i] > arr[indexes.top()]){
            output[indexes.top()] = arr[i];
            indexes.pop();
        }
        indexes.push(i);
    }
    while(!indexes.empty()){
        output[indexes.top()] = -1;
        indexes.pop();
    }

    for(int i = 0; i < size; i++){
        cout << output[i] << " ";
    }
}