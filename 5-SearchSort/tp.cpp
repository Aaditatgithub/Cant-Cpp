#include<iostream>
#include<vector>
using namespace std;

void sumArr(int* &arr,vector<int> &s){
    int size = 6;
    int sum = 0;
    for(int i = 0; i< 6; i++){
        //sum+=arr[i];
    }
    cout << sum << "\n";
}

int main(){

    vector<int> v;
    int a[] = {1,2,3,4,5,6};
    int size = 6;
    int sum = 0;
    int *p = &size;
    sumArr(p,v);

    vector<vector<char>> v(10,vector<char>(10,0));
    
    for(int i = 0; i < 6;i++){
        sum+=a[i];
    }
    cout << sum;    

}


