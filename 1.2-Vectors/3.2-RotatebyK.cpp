#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main(){

    vector<int> v(6);
    v = {1,2,3,4,5,6};
    int k = 4;

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
    
    for(int ele: v)
        cout<<ele<<" ";   
    
}