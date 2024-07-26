#include<iostream>
using namespace std;

// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

long long KadaneAlgorithm(int *arr, int n){
        
        long long sum = 0;
        long long maximum = arr[0];
        
        for(int i = 0; i < n; i++){
            sum += arr[i];
            maximum = max(maximum , sum);
            
            if(sum < 0){
                sum = 0;
            }
        }
        return maximum;
}

int main(){

    int Arr[] = {-1,-2,-3,-4,1,5,-4,2,5,9,-6};
    int n = sizeof(Arr)/sizeof(int);

    cout << KadaneAlgorithm(Arr,n);

}