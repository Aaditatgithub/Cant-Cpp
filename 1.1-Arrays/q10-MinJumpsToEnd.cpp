#include<iostream>
using namespace std;
//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

int minJumps(int arr[], int n){
    
    int maxreach=0;
    int maxx=0;
    int jumps=0;
    
    for(int i=0;i<=n-1;i++){
        maxx=max((i+arr[i]),maxx);
        if(i==maxreach){
            maxreach=maxx;
            jumps++;
            if(maxreach>=(n-1))
                return jumps;
        }
    }
    return -1;
}

int main(){


}