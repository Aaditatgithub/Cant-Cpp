#include<iostream>
#include<vector>
using namespace std;

//Given Q queries check if a particular number is present or not, given that max value of elements in array is gonna be 1e5
int main(){

    int n;
    cin>> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    const int N = 1e5 + 10;
    vector<int> freq(N,0);

    for (int i = 0; i < n; i++)
    {
       freq[v[i]]++;
    }

    cout<<"Enter queries : ";
    int q;
    cin>>q;

    while(q--){

        int queryelement;
        cin>>queryelement;
        cout<<freq[queryelement] << endl;
    }
    
    
}