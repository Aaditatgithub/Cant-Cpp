#include<iostream>
#include<algorithm>
using namespace std;

void sort012(int a[], int n)
    {
        // code here
       // sort(a,a+n);
       int count_1s = 0 , count_2s = 0;
       for(int i = 0; i < n; i++){
           if(a[i] == 1){
               count_1s++;
           }
           else if(a[i] == 2){
               count_2s++;
           }
       }
       int count_zeros = n - count_1s - count_2s;
       int i = 0;
       while(count_zeros--){
           a[i++] = 0;
       }
       while(count_1s--){
           a[i++] = 1;
       }
       while(count_2s--){
           a[i++] = 2;
       }
       
    }


int main(){

    int arr[] = {0,1,2,2,2,1,1,1,0,0,0,0};
    int size = sizeof(arr)/sizeof(int);

    sort012(arr,size);
}