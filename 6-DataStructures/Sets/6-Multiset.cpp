#include<iostream>
#include<set>
using namespace std;

/*
    insertion : O(logn)
    count : O(k+logn)
*/

int main(){

    multiset<int> ms;
    ms.insert(12);
    ms.insert(12);
    ms.insert(1232);
    ms.insert(123);
    ms.insert(65);

    for(int ele: ms){
        cout<< ele << " ";
    }
}