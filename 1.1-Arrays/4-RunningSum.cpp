#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    int n;
    cin>>n;

    int ele;
    for (int i = 0; i < n; i++)
    {
        cin>> ele;
        v.push_back(ele);
    }
    
    for(int ele: v){
        cout<< ele<< " ";
    }
    cout<<endl;
    for (int i = 1; i < n; i++)
    {
        v[i] += v[i-1];
    }

    for(int ele: v){
        cout<< ele<< " ";
    }
    

}