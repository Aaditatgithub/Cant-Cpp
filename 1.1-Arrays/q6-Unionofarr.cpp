#include<iostream>
#include<set>
using namespace std;

int SizeofUnion(int *arr, int n, int* brr, int m){
    set<int> s;
        for(int i = 0; i < n; i++){
            s.insert(arr[i]);
        }
        for(int i = 0; i < m; i++){
            s.insert(brr[i]);
        }
        return s.size();
}

int main(){

    int a[] = {12,12,4443,12,76,87,1};
    int n = sizeof(a)/sizeof(int);
    int b[] = {23,32,1,2,12,12,87,1};
    int m = sizeof(b)/sizeof(int);

    cout << SizeofUnion(a,n,b,m);
}