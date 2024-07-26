#include<iostream>
#include<vector>
using namespace std;

//Print the sum of values in a given range of indices
int main(){

    int n;
    cin>>n;
    int e;
    vector<int> v(n+1,0);
    for (int i = 1; i < n; i++){
        cin>>e;
        v[i] = (e + v[i-1]);
    }

    int q;
    cin>> q;

    while(q--){
        int l,r;
        cin>> l >> r;
        cout<< "\n" << v[r] - v[l-1] <<endl;
    }
    
    


}